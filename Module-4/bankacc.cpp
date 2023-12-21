// Define a class to represent a bank account.
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorname;
    int accountnumber;
    string accounttype;
    double balance;

public:

    void setaccdetails(const string& name, int accnumber, const string& acctype, double initialbalance) {
        depositorname = name;
        accountnumber = accnumber;
        accounttype = acctype;
        balance = initialbalance;
    }


    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited. New balance: " << balance << endl;
    }


    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }


    void display() {
        cout << "Account Holder: " << depositorname << endl;
        cout << "Account Number: " << accountnumber << endl;
        cout << "Account Type: " << accounttype << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount myacc;


    myacc.setaccdetails("Harshad Mehta", 9879921646456, "Savings", 1000.0);


    myacc.display();


    myacc.deposit(500.0);
    myacc.withdraw(200.0);


    myacc.display();

    return 0;
}