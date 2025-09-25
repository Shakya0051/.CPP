#include<iostream>
using namespace std;

class shape
{
    public :
    virtual void calculateArea() = 0;
    virtual void displayShape() = 0;
};
class Circle : public shape
{
    public :
    float area;
    void calculateArea()
    {   
       float r;
       cout<<"Enter r :"<<endl;
       cin>>r;
       area =3.14f*r*r;
    }
    void displayShape()
    {
        cout<<"This  is the shape of circle: "<<area<<endl;
    }
};
class Square : public shape 
{
    public :
    int area;
    void calculateArea()
    { 
        int a;
       cout<<"Enter a:"<<endl;
       cin>>a;

       area =a*a;
    }
    void displayShape()
    {
        cout<<"This is Square: "<<area<<endl;
    }
};
class Triangle : public shape
{
   public :
   float area;
   void calculateArea()
   {
       int l,b;
       cout<<"Enter l,b:"<<endl;
       cin>>l,b;

       area = 0.5*l*b;
   }

   void displayShape()
   {
      cout<<"This is Triangle : "<<area<<endl;
   }
};

int main()
{
   shape* obj = new Circle();
   shape* obj1 = new Square();
   shape* obj2 = new Triangle();
   obj->calculateArea();
   obj->displayShape();
   obj1->calculateArea();
   obj1->displayShape();
   obj2->calculateArea();
   obj2->displayShape();

}