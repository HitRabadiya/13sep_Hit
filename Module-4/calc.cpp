// WAP to create a simple calculator using class.
#include <iostream>
using namespace std;
class Calculator{

public:
    int addition(int num1, int num2){
        return num1 + num2;
    }
    int subtraction(int num1, int num2){
        return num1 - num2; 
    }
    int multiplication(int num1, int num2){
        return num1 * num2;
    }
    float division(float num1, float num2){
        if(num2 != 0){
            return num1/num2;
        }
        else{
            cout<<"Error: Can not be divided by zero."
                <<endl;
                return 0.0;
        }
    }
};

int main(){
    
Calculator calc;
    int resultofaddition = calc.addition(8,3);

    int resultofsubtraction = calc.subtraction(8,3);

    int resultofmultiplication = calc.multiplication(8,3);

    float resultofdivision = calc.division(8,3);


cout<< "Addition: " << resultofaddition << endl;
cout<< "Subtraction: " << resultofsubtraction << endl;
cout<< "Multiplication: " << resultofmultiplication << endl;
cout<< "Division: " << resultofdivision << endl;

    return 0;
}