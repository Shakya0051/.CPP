#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    
    void input() {
        cout << "Enter name: ";
        cin >> name;   
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name 
             << ", Roll: " << roll 
             << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    
    Student *students = new Student[n];

   
    cout << "\n--- Enter Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].input();
    }

    
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    
    delete[] students;

    return 0;
}
