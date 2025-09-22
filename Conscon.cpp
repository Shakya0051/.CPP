#include <iostream>
using namespace std;

int main() {
    int a = 50;
    const int *const p = &a;  // constant pointer to constant int

    cout << *p << endl; // prints 50

    // *p = 60;  ❌ error (value cannot change)
    // p = &b;   ❌ error (pointer cannot move)

    return 0;
}
