#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    string name; // Private data member
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Getter for name
    string getName() const { return name; }

    // Setter for name
    void setName(string n) { name = n; }

    // Getter for age
    int getAge() const { return age; }

    // Setter for age
    void setAge(int a) { age = a; }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << " years" << endl;
    }
};

int main() {
    Person p1("Ahmad Ali", 21);
    p1.display();
    p1.setAge(22);
    cout << "Updated Age: " << p1.getAge() << " years" << endl;
    return 0;
}
