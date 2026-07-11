#include <raylib.h>
#include <iostream>
#include "../include/gui.h"

void Buttons::InitButtons(Rectangle Rec,const char* BtnName,void (*func)())
{
    DrawRectangleRec(Rec,WHITE);
    DrawText(BtnName,Rec.x,Rec.y,13,BLACK);
    Vector2 Vec = {GetMouseX(),GetMouseY()}; 
    if (CheckCollisionPointRec(Vec,Rec))
        {
            if (IsMouseButtonPressed(0))
                {
                    func();
                } 
        }
}