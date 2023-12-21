// Person's name, age and country 
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setname(const string& n) {
        name = n;
    }

    void setage(int a) {
        age = a;
    }

    void setcountry(const string& c) {
        country = c;
    }

    const string& getname() const {
        return name;
    }

    int getage() const {
        return age;
    }

    const string& getcountry() const {
        return country;
    }
};

int main() {
    Person person1;

    person1.setname("John Wick");
    person1.setage(25);
    person1.setcountry("USA");

    // Get and display the values
    std::cout << "Person Name: " << person1.getname() << endl;
    std::cout << "Person Age: " << person1.getage() << endl;
    std::cout << "Person Country: " << person1.getcountry() << endl;

    return 0;
}