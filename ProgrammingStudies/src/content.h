#ifndef CONTENT_H
#define CONTENT_H

//Qt
#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <QMap>
#include <QList>

class content
{
private:

    QMap<QString, QString> main_map;

public:
    content();
    ~content();

    void displayAllContent();

};

#endif // CONTENT_H
