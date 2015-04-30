#ifndef IOCONTENTS_H
#define IOCONTENTS_H

class iocontents
{
private:

//    bool show;

public:

    iocontents();
    ~iocontents();

    void content_guide();
    void show_chapter_list(bool show);
    void ClearScreen();

    int ask_user_display_choice();

//    void show_chapter_list(show);

};

#endif // IOCONTENTS_H
