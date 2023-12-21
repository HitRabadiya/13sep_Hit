// Multiplication values and Cubic values
#include <iostream>
using namespace std;

inline double multiply(double num1, double num2) {
    return num1 * num2;
}

inline double cube(double num) {
    return num * num * num;
}

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    double multiplicationresult = multiply(num1, num2);
    std::cout << "Multiplication Result: " << multiplicationresult << endl;

    double num3;
    cout << "Enter a number for cubic calculation: ";
    cin >> num3;

    double cubicresult = cube(num3);
    cout << "Cubic Result: " << cubicresult << endl;

    return 0;
}