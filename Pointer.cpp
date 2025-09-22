#include <iostream>
using namespace std;

void show(int x) {
    cout << "Value is: " << x << endl;
}

int main() {
    void (*ptr)(int);  // function pointer: void return, takes int

    ptr = show;  
    ptr(10);  // call function via pointer
    return 0;
}
