#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setlength(double l) {
        length = l;
    }

    void setwidth(double w) {
        width = w;
    }

    double getlength() const {
        return length;
    }

    double getwidth() const {
        return width;
    }

    double calculatearea() const {
        return length * width;
    }

    double calculateperimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle therectangle;

    therectangle.setlength(5.0);
    therectangle.setwidth(3.0);

    double rectanglelength = therectangle.getlength();
    double rectanglewidth = therectangle.getwidth();

    cout << "Rectangle Length: " << rectanglelength << endl;
    cout << "Rectangle Width: " << rectanglewidth << endl;

    double area = therectangle.calculatearea();
    double perimeter = therectangle.calculateperimeter();

    cout << "Rectangle Area: " << area << endl;
    cout << "Rectangle Perimeter: " << perimeter << endl;

    return 0;
}