#include<iostream>
using namespace std;

class Person
{
    public:
     string name = "Saurabh \n";
     int age = 23;
     
};
class Student : public Person
{
     public:
     int stdID = 51;
     void display()
     {
        cout<<name<<""<<age<<"\n"<<stdID<<""<<endl;
     }
};

int main()
{
    Student obj;
    obj.display();
}