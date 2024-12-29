#include <iostream>
using namespace std;

class Polygon {
protected:
    int height; // Protected data member
    int length;

public:
    // Set value for height and length
    void setValue(int h, int l) { height = h; length = l; }
};

class Rectangle: public Polygon {
public:
    // Rectangle area
    int area() { return (height*length); }
};

class Triangle: public Polygon {
public:
    // Triangle area
    double area() { return (height*length)/2; }
};

int main() {
    Rectangle r1;
    Triangle t1;

    r1.setValue(10, 20);
    cout << "Area of rectangle: " << r1.area() << endl;

    t1.setValue(10, 20);
    cout << "Area of triangle: " << t1.area() << endl;

    return 0;
}
