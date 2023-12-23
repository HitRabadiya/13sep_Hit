// Implement a class called student that has private member variables for name,class,roll number, and marks.
#include <iostream>
#include <string>
using namespace std;


class Address {
public:
    string street;
    string city;
    string state;
    string zipCode;
};

class Student {
private:
    string name;
    string className;
    int rollNumber;
    double marks;

public:
    Address address; 

    
    Student(const string& n, const string& cls, int roll, double m,const string& street, const string& city, const string& state, const string& zip) 
        : name(n), className(cls), rollNumber(roll), marks(m) {
            address.street = street;
            address.city = city;
            address.state = state;
            address.zipCode = zip;
        }

    
    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    
    void displayInformation() const {
        cout << "Student Information:\n";
        cout << "Name: " << name << "\n";
        cout << "Class: " << className << "\n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Marks: " << marks << "\n";
        cout << "Grade: " << calculateGrade() << "\n";
        cout << "Address: " << address.street << ", " << address.city << ", " << address.state << ", " << address.zipCode << "\n";
    }
};

int main() {
    
    Student myStudent("John Wick", "12th Grade", 12345, 92.5, "123 Main St", "Cityville", "Stateville", "12345");

    
    myStudent.displayInformation();

    return 0;
}