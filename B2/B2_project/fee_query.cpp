#include "fee_query.h"
#include "ui_fee_query.h"
#include "mainwindow.h"

class SOURCE;
class FEE;
class USER;
class RATE;

extern int source_cnt;
extern int query_num;
extern FEE group[100];
extern USER user[10];

float ld_cost=0, loc_cost=0, total_cost=0;


fee_query::fee_query(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fee_query)
{
    ui->setupUi(this);
    caculate_fee();
    display_fee();
}

fee_query::~fee_query()
{
    delete ui;
}

void fee_query::caculate_fee()
{
    for(int i = 0; i < source_cnt; i++)
    {
        if( !strcmp(group[i].m_pnum,user[query_num].pnum) )
        {
            if(group[i].type == '0')
                loc_cost+=group[i].cost;
            else
                ld_cost+=group[i].cost;
        }
    }
    total_cost = loc_cost + ld_cost;
}

void fee_query::display_fee()
{
    ui->textBrowser->setText(QString(user[query_num].name));
    ui->textBrowser_2->setText(QString(user[query_num].pnum));
    ui->textBrowser_3->setText(QString("%1").arg(loc_cost));
    ui->textBrowser_4->setText(QString("%1").arg(ld_cost));
    ui->textBrowser_5->setText(QString("%1").arg(total_cost));
}
