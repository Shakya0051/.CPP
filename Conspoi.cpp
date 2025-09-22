#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int *const p = &a;  // constant pointer to int

    cout << *p << endl; // prints 10

    *p = 15;   // ✅ allowed (value can change)
    cout << *p << endl; // prints 15

    // p = &b;  ❌ error (can't make p point to another variable)

    return 0;
}
