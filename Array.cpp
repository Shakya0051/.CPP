#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1, 2, 3, 4};
    int (*p)[4] = &arr;  

    cout << "Array using pointer to array: ";
    for (int i = 0; i < 4; i++) {
        cout << (*p)[i] << " ";
    }
    cout << endl;

    return 0;
}
