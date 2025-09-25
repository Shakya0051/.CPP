#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Input function
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;

        // Normalize if inches >= 12
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

    // Output function
    void outputDistance() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Add distance
    Distance addDistance(Distance d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        // Normalize inches
        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }
        return temp;
    }
};

int main() {
    Distance d1, d2, sum;

    cout << "Enter first distance:" << endl;
    d1.inputDistance();

    cout << "\nEnter second distance:" << endl;
    d2.inputDistance();

    
    sum = d1.addDistance(d2);

    cout << "\nFirst Distance: ";
    d1.outputDistance();

    cout << "Second Distance: ";
    d2.outputDistance();

    cout << "Sum of distances: ";
    sum.outputDistance();

    return 0;
}
