// Circle's area and circumference
#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:

    void setradius(double r) {
        radius = r;
    }


    double getradius() const {
        return radius;
    }


    double calculatearea() const {
        return 3.14 * radius * radius;
    }


    double calculatecircumference() const {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle thecircle;

    thecircle.setradius(5.0);

    double circleradius = thecircle.getradius();
    cout << "Circle Radius: " << circleradius << endl;

    double area = thecircle.calculatearea();
    double circumference = thecircle.calculatecircumference();

    cout << "Circle Area: " << area << endl;
    cout << "Circle Circumference: " << circumference << endl;

    return 0;
}