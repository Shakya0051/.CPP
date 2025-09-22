#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    const int *p = &a;  // pointer to constant int

    cout << *p << endl;  // prints 10

    // *p = 15;   ❌ error (can't modify value through p)
    p = &b;       // ✅ allowed (pointer can point somewhere else)

    cout << *p << endl;  // prints 20
    return 0;
}
