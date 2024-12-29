#include <iostream>
using namespace std;

class Shape { // Abstract Class
public:
    // Pure virtual function in base/parent class
    virtual void draw() = 0;
};

class Circle: public Shape { // Concrete Class 1
public:
    // Draw circle
    void draw() { cout << "Draw a circle" << endl; }
};

class Rectangle: public Shape { // Concrete Class 2
public:
    // Draw rectangle
    void draw() { cout << "Draw a rectangle" << endl; }
};

class Triangle: public Shape { // Concrete Class 3
public:
    // Draw triangle
    void draw() { cout << "Draw a triangle" << endl; }
};

int main() {
    Shape *sh;

    Circle c1;
    Rectangle r1;
    Triangle t1;

    sh = &c1;
    sh -> draw();

    sh = &r1;
    sh -> draw();

    sh = &t1;
    sh -> draw();

    return 0;
}
