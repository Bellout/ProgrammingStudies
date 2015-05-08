#ifndef contentSlice_H
#define contentSlice_H

//Qt
#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <QMap>
#include <QList>

class contentSlice
{

//private:

    QString slice_name;

public:

    // CONSTRUCTOR, DESTRUCTOR
    contentSlice();
    contentSlice(QString sname);
    ~contentSlice();

    QString getName();
    void showAllContent();

};

#endif // contentSlice_H
