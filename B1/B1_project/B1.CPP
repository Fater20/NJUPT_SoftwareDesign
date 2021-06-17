#include<iostream>      //包含输入输出流对象的头文件
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<process.h>

using namespace std;

FILE *fp1;              //定义外部文件变量
FILE *fp2;
int i=0;                  //文件中存储数据数量
float ave;
float p[5];
void dis_menu();       	//菜单显示
void set_menu();       	//菜单设置
void dis_score();      	//显示学生成绩函数
void dis_overall();
void read_data();
void write_file();
void calc_grades();
void dis_proportion();
void display(char ch);
void check_grade();

struct student
{
	char stu_num[10];
	float usual_score;
	float mid_score;
	float final_score;
	float overall_score;
	char grades;
}s[40];

int main()
{	
	read_data();
	calc_grades();
	while(1)
	{	
		dis_menu();
		set_menu();
	}
		return 0;
}

void dis_menu()
{	cout<<"\t------------------------------------------------------------"<<endl;
	cout<<"\t|                  Student Score System                    |"<<endl;
	cout<<"\t------------------------------------------------------------"<<endl;
	cout<<"\t|      1. Display student's scores                         |"<<endl;
	cout<<"\t|      2. Display ZP scores                                |"<<endl;
	cout<<"\t|      3. Display proportion of each grade                 |"<<endl;
	cout<<"\t|      4. Display the average score of the class           |"<<endl;
	cout<<"\t|      5. Query the students of different grades           |"<<endl;
	cout<<"\t|      6. Exit                                             |"<<endl;
	cout<<"\t------------------------------------------------------------"<<endl;
	cout<<"\tPlease select your option: ";
}  
 

void set_menu()
{	 
	char n[500];
    cin>>n;
	if(strlen(n)>1)
	{	  
  		printf("\tInput error! Please re-enter: "); 
		set_menu();
	}
	else
	{	 
		switch(*n)
		{
			case '1': system("cls"); dis_score(); break;
			case '2': system("cls"); dis_overall(); write_file(); break;
			case '3': system("cls"); dis_proportion(); break;
			case '4': system("cls"); cout<<endl<<"\tThe average score of this class is: "<<ave<<endl; break;
			case '5': system("cls"); check_grade(); break;
			case '6': cout<<"\t"; exit(1); break;
			default: cout<<"\tInput error! Please re-enter: "; set_menu(); break;
		}
	}
}

void read_data()
{	
	char ch;
	int m;
	float sum=0;
	memset (s,0,sizeof(s));
    if((fp1=fopen("note.dat","rb"))==NULL)
	{	
		cout<<"Can't open the file: "<<endl;
		exit(1);
	}
	//while(fgetc(fp1)!='\n');   
	fscanf(fp1,"%s%f%f%f",s[i].stu_num,&s[i].usual_score,&s[i].mid_score,&s[i].final_score);
	while(!feof(fp1))
	{
		i=i+1;
		fscanf(fp1,"%s%f%f%f",s[i].stu_num,&s[i].usual_score,&s[i].mid_score,&s[i].final_score);
	}
	for(m=0;m<i;m++)
	{
		s[m].overall_score=(s[m].usual_score)*0.3+(s[m].mid_score)*0.3+(s[m].final_score)*0.4;
		sum=sum+s[m].overall_score;
	}
	ave=sum/i;
	fclose(fp1);	 
}

void dis_score()
{
	// char s[256];
	// if((fp1=fopen("note.dat","rb"))==NULL)
	// {
	// 	cout<<"\tCan't open the file: "<<endl;
	// 	exit(1);
	// }
	// cout<<endl<<"\tStudent's scores: "<<endl;
	// printf("\t%-14s%-18s%-24s%s\r\n","ID","Usual Score","Mid-term Score", "Final Score");
	// while(fgets(s,256,fp1)!=NULL)                      //读入一行字符串并在屏幕上显示
	// {
	// 	cout<<"\t"<<s;
	// }
	// fclose(fp1);
	int j;
	cout<<endl<<"\tStudent's scores: "<<endl;
	printf("\t%-12s%-12s%-12s%-12s\r\n","ID","Usual Score","Mid Score", "Final Score");
	for(j=0; j<i; j++)
	{
		printf("\t%-12s%-12.4g%-12.4g%-12.4g\r\n",s[j].stu_num, s[j].usual_score, s[j].mid_score, s[j].final_score);
	}
	printf("\r\n\r\n");
}

void dis_overall()
{
	int j;
	printf("\t%-12s%-14s%-12s\r\n","ID","Overall Score","Score Rank");
	for(j=0; j<i; j++)
	{
		printf("\t%-12s%-14.4g%-12c\r\n",s[j].stu_num,s[j].overall_score,s[j].grades);
	}	
	printf("\r\n\r\n");
}

void write_file()
{
	int m;
	while((fp2=fopen("out.dat","wb"))==NULL)
	{
		cout<<"\tCan't open the file: "<<endl;
		exit(1);
	}
	fprintf(fp2,"%-12s%-16s%-10s\r\n","ID","Overall Score","Score Rank");
	for(m=0;m<i;m++)
			fprintf(fp2,"%-12s%-16.4g%-10c\r\n",s[m].stu_num,s[m].overall_score,s[m].grades);
	
	fclose(fp2);
}

void calc_grades()
{
	int m;
	int n[5]={0,0,0,0,0};
	for(m=0;m<i;m++)
	{
		switch((int)s[m].overall_score/10)
		{
			case 10:
			case 9:   s[m].grades='A'; n[0]++; break;
			case 8:   s[m].grades='B'; n[1]++; break;
			case 7:   s[m].grades='C'; n[2]++; break;
			case 6:	  s[m].grades='D'; n[3]++; break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:   s[m].grades='E'; n[4]++; break;
		}
	}
	for(m=0;m<5;m++)
		p[m]=1.0*n[m]/i;		
}

void dis_proportion()
{
	int m;
	printf("\t%-12s%-10s\n","Score Rank","Proportion");
	for(m=0;m<5;m++)
		printf("\t%-12c%-0.2f%%\n",65+m,p[m]*100);
	printf("\n");
}

void check_grade()
{
	while(1){
		cout<<endl<<"\tPlease enter the level you want to query ( or quit(q) ): ";
	
		char ch[20];
		cin>>ch;

		if(('A'<=ch[0])&&(ch[0]<='E'))
		{
			switch(*ch)
			{
				case 'A': display('A'); break;
				case 'B': display('B'); break;
				case 'C': display('C'); break;
				case 'D': display('D'); break;
				case 'E': display('E'); break;
				//default: cout<<"\tInput error! Please re-enter: "; break;
			}
		}
		else if('a'<=ch[0]&&ch[0]<='e')
		{
			switch(*ch)
			{
				case 'a': display('A'); break;
				case 'b': display('B'); break;
				case 'c': display('C'); break;
				case 'd': display('D'); break;
				case 'e': display('E'); break;
				//default: cout<<"\tInput error! Please re-enter: "; break;
			}
		}
		else if(ch[0]=='q'||ch[0]=='Q')
		{
			break;
		}
		else
		{
			cout<<"\tInput error! Please re-enter. \r\n";
		}
	}
}

void display(char ch)
{
	int m,j=0;
	printf("\r\n\tStudents in rank %c: \r\n",ch);
	printf("\t%-12s%-10s\n","ID","Overall Score");
	for(m=0;m<i;m++)
	{
		if(s[m].grades==ch)
		{
			printf("\t%-12s%-10.4g\n",s[m].stu_num,s[m].overall_score);
			j++;
		}
	}
	if(j==0)   cout<<"\tSorry, no record. ";
	printf("\t\n\n");
}
