// Implement a class called date that has private member variables for day, month, and year.
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValidDate() const {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;

        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
            
            if (day > 29)
                return false;
        } else {
            if (day > daysInMonth[month])
                return false;
        }

        return true;
    }
};

int main() {
    
    Date myDate(25, 12, 2023);


    cout << "Date: " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() << "\n";

    if (myDate.isValidDate()) {
        cout << "This date is valid.\n";
    } else {
        cout << "Invalid date.\n";
    }

    return 0;
}