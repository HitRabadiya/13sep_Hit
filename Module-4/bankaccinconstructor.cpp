// Implement a class called bank account that has private member variables for account number and balance. 
#include <iostream>
using namespace std;

class Bankaccount {
private:
    int accountnumber;
    double balance;

public:
    
    Bankaccount(int accnumber, double initialbalance) : accountnumber(accnumber), balance(initialbalance) {}

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << "\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << "\n";
        } else {
            cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    
    double getbalance() const {
        return balance;
    }
};

int main() {
    
    Bankaccount myaccount(12345, 1000.0);

    
    myaccount.deposit(500.0);
    myaccount.withdraw(200.0);

    
    cout << "Current balance: " << myaccount.getbalance() << "\n";

    return 0;
}