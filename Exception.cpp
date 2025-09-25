#include<iostream>
#include<exception>

using namespace std;

int main()
{

    int x = 10;
    int y = 0;
    //int z = x/y; //exception occur
    int z ;
    try
    {
        
            if (y==0)
             throw"Divide by zero error";
        
        z = x/y;
        cout<<"value is : "<<z<<endl;     
        
    }
    catch(const char *e)
    {
        cout<<"Error " <<e<<endl;
    }
    
    cout<<"Hello"<<endl;

    return 0;
}