//#ifndef CHAPTER_H
//#define CHAPTER_H
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class chapter
{

private:

    string sec, subsec, subsubsec;
    string nsec, nsubsec, nsubsubsec;

public:

    chapter();
    ~chapter();

    void show_chapter_structure(string ss); // show chapter structure


};



//#endif // CHAPTER_H


