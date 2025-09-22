#include <iostream>
using namespace std;

class Calculation {
public:
    
    void area(int a) {
        cout << "Area of Square: " << a*a << endl;
    }

    
    void area(int l, int w) {
        cout << "Area of Rectangle: " << l*w << endl;
    }

   
    void area(double r) {
        cout << "Area of Circle: " << 3.14 * r*r << endl;
    }
};

int main() {
    Calculation calc;

    calc.area(5);        
    calc.area(4, 6);    
    calc.area(3.0);     

    return 0;
}