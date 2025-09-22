#include <iostream>
#include <cstdlib>  
using namespace std;

int main() {
    int *p;

    p = (int*) malloc(sizeof(int));  

    if (p == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    *p = 42; 
    cout << "Value: " << *p << endl;

    free(p);
    return 0;
}
