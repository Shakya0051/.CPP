#include<iostream>
using namespace std;

class person
{
   public:
   string person = "Saurabh\n";
   int age = 24 ;
   void show()
   {
    cout<<"Name:"<<person<<"\nAge:"<<age<<""<<endl;
   }
   
};
class student : public person
{
public :
     string student = "Himanshu \n";
      int stdage = 23;
      string collageName  = "\nKcc \n";
};
class Employee : public person
{
public :
    
    int salary = 500000 ;
};

class Manager : public student, public Employee
{
  public :
   string Department  = "\nComputer Science";
   void display()
   {
    cout<<"Name:"<<student<<"\nstdage:"<<stdage<<"\nCllgeName:"<<collageName<<"\nSalary:"<<salary<<"\nDept.Name:"<<Department <<"" << endl;
}

};

int main ()
{
    person p;
    p.show();
    Manager obj;
    obj.display();
    
}
