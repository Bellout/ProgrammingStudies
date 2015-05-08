#ifndef IOCONTENTS_H
#define IOCONTENTS_H

//Qt
#include <QDebug>
#include <QProcess>

//LOCAL
#include "../src/contentslice.h"

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

    // TEST FUNCTIONS
    void genericChoiceLoop(
            contentSlice cSlice);


    void show_chapter_list(bool show);
    void askIfChapterDisplay();

};

#endif // IOCONTENTS_H
