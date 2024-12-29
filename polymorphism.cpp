#include <iostream>
using namespace std;

class Shape {
public:
    // Virtual function in base/parent class
    virtual void draw() { cout << "Draw a shape" << endl; }
};

class Circle: public Shape {
public:
    // Draw circle
    void draw() { cout << "Draw a circle" << endl; }
};

class Rectangle: public Shape {
public:
    // Draw rectangle
    void draw() { cout << "Draw a rectangle" << endl; }
};

class Triangle: public Shape {
public:
    // Draw triangle
    void draw() { cout << "Draw a triangle" << endl; }
};

int main() {
    Shape *sh;

    Shape s1;
    Circle c1;
    Rectangle r1;
    Triangle t1;

    sh = &s1;
    sh -> draw();

    sh = &c1;
    sh -> draw();

    sh = &r1;
    sh -> draw();

    sh = &t1;
    sh -> draw();

    return 0;
}
