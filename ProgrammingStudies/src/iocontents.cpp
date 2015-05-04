#include "iocontents.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include <term.h>
#include <QDebug>

using namespace std;

iocontents::iocontents()
{
}

iocontents::~iocontents()
{

}

void iocontents::show_chapter_list(bool show)
{

}

void iocontents::content_guide()
{
    /* ----------------------------
     * DISPLAY BOOK TITLE */

//    system("clear");

    ClearScreen();

    string book_title = "THE C++ PROGRAMING LANGUAGE, "
                        "4ED [ch:1-44;p1347] -- "
                        "BJARNE STROUSTRUP";
    string book_uline(book_title.size(),'*');
    cout<<"\n"<<book_uline<<"\n";
    cout<<book_title<<"\n";
    cout<<book_uline<<"\n\n";

    /* ----------------------------
     * ASK USER FOR DISPLAY CHOICE */
    int cchoice;
    cchoice = ask_user_display_choice();

}

int iocontents::ask_user_display_choice()
{
    int ctries=1;
//    int stries=1;
    int cchoice=-1;

    while (ctries<4)
    {
        cout<<"Display whole chapter list (y or n)?\n";
        char answer = 0;
        cin >> answer;

        switch (answer){
        case 'y':
            cchoice = 1;
<<<<<<< Updated upstream
            qDebug()<<"Answer 1: "<<answer;
            qDebug()<<"Chosen: "<<cchoice;
        case 'n':
            cchoice = 0;
            qDebug()<<"Answer 2: "<<answer;
            qDebug()<<"Chosen: "<<cchoice;
=======
            cout<<"Chosen: "<<cchoice<<"\n";
            ctries=4;

        case 'n':
            cchoice = 0;
            cout<<"Chosen: "<<cchoice<<"\n";
            ctries;

>>>>>>> Stashed changes
        default:
            qDebug()<<"Answer 3: "<<answer;
            cout<<"choose y or n...\n";
            ++ctries;
        }

        qDebug()<<++ctries;

        if (cchoice==1 || cchoice==0)
        {
            qDebug()<<cchoice;
            break;
        }
    }

    cout<<"Returning: "<<cchoice<<"\n";
    return cchoice;

//    while (stries<4)
//    {
//        cout<<"Display content of which chapter (#)?\n";
//        char answer = 0;
//        cin >> answer;

//        switch (answer){
//        case 'y':
//            cchoice = 1;
//        case 'n':
//            cchoice = 0;
//        default:
//            cout<<"choose y or n...\n";
//            ++stries;
//    }

}



//void iocontents::ClearScreen()
//{
//    if (!cur_term)
//    {
//    int result;
//    setupterm( NULL, STDOUT_FILENO, &result );
//    if (result <= 0) return;
//    }

//    putp( tigetstr( "clear" ) );
//}

void iocontents::ClearScreen()
{
    cout << string( 100, '\n' );
}


