// Calculator using constructor
#include <iostream>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double n1, double n2) : num1(n1), num2(n2) {}

    double add() const {
        return num1 + num2;
    }

    double subtract() const {
        return num1 - num2;
    }

    double multiply() const {
        return num1 * num2;
    }

    double divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Cannot divide by zero." << endl;
            return 0.0;
        }
    }
};

int main() {
    double input1, input2;
    cout << "Enter two numbers: ";
    cin >> input1 >> input2;

    Calculator mycalc(input1, input2);

    cout << "Addition: " << mycalc.add() << endl;
    cout << "Subtraction: " << mycalc.subtract() << endl;
    cout << "Multiplication: " << mycalc.multiply() << endl;
    cout << "Division: " << mycalc.divide() << endl;

    return 0;
}