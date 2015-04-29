#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* -----------------------
     * SET ALGORITHMS [p947] */

    std::cout<<"SET ALGORITHMS [p947]\n";

    /* ------------------
     * POINTERS [p179] */

    qDebug()<<"POINTERS [p179]";

    int v[] = {1, 2, 3, 4};
    qDebug()<<v;

    int *p1 = v; // pointer to intial element (implicit conversion)
    qDebug()<<p1;

//    qDebug()<<v[];
    qDebug()<<sizeof v; // bitsize
    qDebug()<<sizeof p1;

    int i;
    for (i=0; i!=4; ++i) {
        std::cout << v[i] <<'\n';
    }



    /* --------- */

    return a.exec();


}
