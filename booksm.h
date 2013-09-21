#ifndef BOOKSM_H
#define BOOKSM_H

#include<QObject>
#include<QGridLayout>
#include<QLabel>
class booksm:public QWidget
    {
    Q_OBJECT


public:
    explicit booksm(QString t1,QString t2,QWidget *parent=0);

private:

    QLabel *l1;
    QLabel *l2;
    //QLabel *pic;
    //QLabel *author;
    //QLabel *pub;
};

#endif // BOOKSM_H
