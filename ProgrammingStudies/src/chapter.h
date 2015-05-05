#ifndef CHAPTER_H
#define CHAPTER_H
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class chapter
{

private:

    // number of sections:
    int nsec, nsubsec, nsubsubsec;
    //

public:

    int    nchp; // chapter number
    string name; // chapter name
    // string vectors of section and subsections
    vector<string> sec_nms, subsec_nms, subsubsecnms;

    // chapter class constructor
    chapter(int num, string tlt, vector<string> secs);

    // chapter class destructor
    ~chapter();

    // show chapter structure
    void show_structure(string struct_depth);

};



#endif // CHAPTER_H


