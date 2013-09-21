#include"booksm.h"
#include<QGridLayout>
#include<QLabel>
booksm::booksm(QString t1,QString t2,QWidget *parent):QWidget(parent)
{
    QGridLayout *m=new QGridLayout();
    l1=new QLabel(t1);
    l2= new QLabel(t2);
m->addWidget(l1,0,0);
m->addWidget(l2,0,1);
setLayout(m);
}
