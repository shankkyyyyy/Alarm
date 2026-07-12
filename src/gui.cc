#include <raylib.h>
#include <iostream>
#include "../include/gui.h"

// Buttons Init Functions;
void Buttons::InitButtons(Rectangle Rec,const char* BtnName,void (*func)())
{
    // Draws Rectanlge On the Specified Cords 
    DrawRectangleRec(Rec,WHITE);
    // Draws The Text In the Rectangle 
    DrawText(BtnName,Rec.x,Rec.y,13,BLACK);
    // Gets Mosue Cordinates 
    Vector2 Vec = {GetMouseX(),GetMouseY()}; 
    // Checks For Mouse Collision With Rectangle
    if (CheckCollisionPointRec(Vec,Rec))
        {
            // Checks if Left Mouse Button Is Pressed Or not
            if (IsMouseButtonPressed(0))
                {
                    // Calls The callback function
                    func();
                }
            // dummy Code
            else 
            {
                return; 
            } 
        }
    // Dummy Code.
    else
    {
        return; 
    }
}

void Input::InitInput(Rectangle Rec,char* OverLayText,char* buffer,bool IsPressed)
{
    DrawRectangleRec((Rectangle)Rec,GRAY);
    DrawText(OverLayText,Rec.x + 2,Rec.y + 2,14,BLACK);
    Vector2 Vec = {GetMouseX(),GetMouseY()};
    if(IsPressed)
    {

    }
    if(CheckCollisionPointRec(Vec,Rec))
    {
        if(IsMouseButtonPressed(0))
        {

        }
    }
}
