#include <iostream>
#include "../include/gui.h"
#include "../include/dashboard.h"
#include <raylib.h>

// TO-DO

// GUI screen (completed)
// Buttons (completed)
// Making buttons responsive (completed) 
// Input box
// Showing TIME in the GUI Screen
// Making Alarm Sound

void print()
{
    std::cout << "Button Pressed" << std::endl; 
    return; 
}

int main()
{
    Rectangle rec = {100,100,100,100};
    Buttons Btn1;  
    DashBoard a; 
    InitWindow(600,500,"Alarm"); 
    while(!WindowShouldClose()){
        BeginDrawing(); 
         BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Use ARROW KEYS to move", 10, 10, 20, DARKGRAY);
            a.DrawDashBoard(); 
            Btn1.InitButtons(rec,"nihal",print);
        EndDrawing();
    }
    return 0; 
}