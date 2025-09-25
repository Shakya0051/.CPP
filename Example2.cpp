#include<iostream>
#include<iomanip>
using namespace std;

class time
{
   int hours,minutes,seconds;
   public:
    time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    time(int h,int m,int s)
    {
        hours = h;
        minutes = m;
        seconds = s;

    }
    if (seconds >= 60)
      {
            minutes += seconds / 60;
            seconds = seconds % 60;
        }
        if (minutes >= 60)
         {
            hours += minutes / 60;
            minutes = minutes % 60;
        }

    
    time add(time t)
    {
        time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;
        temp.seconds = seconds + t.seconds;

         if (temp.seconds >= 60) {
            temp.minutes = temp.minutes + temp.seconds / 60;
            temp.seconds = temp.seconds % 60;
        }
        if (temp.minutes >= 60) {
            temp.hours =  temp.hours + temp.minutes / 60;
            temp.minutes = temp.minutes % 60;
        } 
        return temp;
    }

    void display()
    {
        cout <<setfill('0')<< setw(2)<< hours<<":" 
        <<setfill('0') << setw(2) << minutes <<":" 
        <<setfill('0') << setw(2) << seconds <<endl;
    }
};

int main()
{
  
}