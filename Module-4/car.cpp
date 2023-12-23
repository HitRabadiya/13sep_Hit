// Company, model & year of car
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    
    Car() : year(0) {}

    
    void setcompany(const string& c) {
        company = c;
    }

    void setmodel(const string& m) {
        model = m;
    }

    void setyear(int y) {
        year = y;
    }

    
    string getcompany() const {
        return company;
    }

    string getmodel() const {
        return model;
    }

    int getyear() const {
        return year;
    }
};

int main() {
    
    Car thecar;

    
    thecar.setcompany("Toyota");
    thecar.setmodel("Camry");
    thecar.setyear(2022);

    
    cout << "Car Information:\n";
    cout << "Company: " << thecar.getcompany() << "\n";
    cout << "Model: " << thecar.getmodel() << "\n";
    cout << "Year: " << thecar.getyear() << "\n";

    return 0;
}