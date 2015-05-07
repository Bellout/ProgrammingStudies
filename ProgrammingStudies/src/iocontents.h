#ifndef IOCONTENTS_H
#define IOCONTENTS_H

//Qt
#include <QDebug>
#include <QProcess>

class iocontents
{
private:

public:

    iocontents();
    ~iocontents();

    // MAIN FUNCTION
    void showContentGuide();
    // AUX FUNCTIONS
    void clearScreen();
    void showBookTitle();
    void showAllChaptersList();




    void show_chapter_list(bool show);

    void askIfChapterDisplay();

//    void show_chapter_list(show);

};

#endif // IOCONTENTS_H
