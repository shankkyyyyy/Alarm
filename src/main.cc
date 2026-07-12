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
    Rectangle rec = {400,400,100,100};
    Rectangle Input1 = {100,300,120,40}; 
    Buttons AlarmBtn; 
    Input A1;  
    DashBoard a; 
    InitWindow(600,500,"Alarm"); 
    while(!WindowShouldClose()){
        BeginDrawing(); 
         BeginDrawing();
         AlarmBtn.InitButtons(rec,"Set Timer",print);    
         ClearBackground(BEIGE);
            a.DrawDashBoard(); 
            A1.InitInput(100,100,Input1,"put the timer");      
        EndDrawing();
    }
    return 0; 
}