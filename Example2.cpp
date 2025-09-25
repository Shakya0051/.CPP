#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
   int hours,minutes,seconds;
   public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h,int m,int s)
    {
        hours = h;
        minutes = m;
        seconds = s;

    }
    
    
    Time add(Time t)
    {
        Time temp;
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
  Time t1(2,45,23);
  Time t2(4,56,43);
  Time t3;

  t3 = t1.add(t2);
  t3.display();
}