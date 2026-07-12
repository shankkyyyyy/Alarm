#include "../include/dashboard.h" 
#include <raylib.h>
#include <ctime>
#include <chrono>

void DashBoard::DrawDashBoard()
{
    // Drawing Text; 
    DrawText("Alarm",240,50,36,BLACK);

    // taking in time
    auto Time = std::chrono::system_clock::now(); 
    // making the variable Time to time_t;
    std::time_t  CurrentTime = std::chrono::system_clock::to_time_t(Time);     
    
    std::tm* Time_tm = std::localtime(&CurrentTime); 

    // turning Time_tm into integers
    int Year = Time_tm->tm_year + 1900; 
    int Month = Time_tm->tm_mon + 1;
    int Day = Time_tm->tm_mday; 

    int Hour = Time_tm->tm_hour; 
    int Min = Time_tm->tm_min; 
    int Sec = Time_tm->tm_sec; 

    // currently not using this variable 
    int DayOfTheWeek = Time_tm->tm_wday; 

    // buffer for DrawText 
    char Date[512]; 
    char CTime[512];

    // combining the integers and forming a clock 
    snprintf(Date,sizeof(Date),"Year: %d \nMonth: %d \nDay: %d\n",Year,Month,Day);
    snprintf(CTime,sizeof(CTime),"Time: %d:%d:%d",Hour,Min,Sec); 

    // drawing text on the screen 
    DrawText(Date,55,140,26,BLACK);
    DrawText(CTime,50,110,27,BLACK); 

}