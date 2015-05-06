#ifndef CHAPTER_H
#define CHAPTER_H
#include <iostream>
#include <stdio.h>
#include <vector>
#include "section.h"
#include "subsection.h"

using namespace std;

class chapter
{

private:

    // number of sections:
    int nsec, nsubsec, nsubsubsec;
    //

public:

    // chapter number
    int nchp;

    // chapter name
    string name;

    // section object
    section sec_vector;

    // chapter class constructor
    chapter(int num, string tlt,
            section sec);

    // chapter class destructor
    ~chapter();

    // show chapter structure
    void show_structure(string struct_depth);

};



#endif // CHAPTER_H


