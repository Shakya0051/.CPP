#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;   // same as &arr[0]

    cout << "First element: " << *p << endl;      // 10
    cout << "Second element: " << *(p + 1) << endl; // 20

    return 0;
}
