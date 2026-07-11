#ifndef Gui_Window 
#define Gui_Window
#include <raylib.h>
#include <string>

class Buttons
{
    private:
        int width{0}; 
        int height{0};
    public:
        void InitButtons(Rectangle Rec,const char* BtnName,void (*func)());

};

#endif 