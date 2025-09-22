#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    void *gp;

    gp = &a;
    cout << "Value of a: " << *(int*)gp << endl;  

    gp = &b;
    cout << "Value of b: " << *(float*)gp << endl;

    gp = &c;
    cout << "Value of c: " << *(char*)gp << endl; 
    return 0;
}
