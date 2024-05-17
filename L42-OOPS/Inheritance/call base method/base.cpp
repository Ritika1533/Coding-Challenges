#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void baseMethod() {
        cout << "Base method called" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void derivedMethod() {
        cout << "Derived method called" << endl;
    }
};

int main() {
    // Call base class method without creating an instance
    //Base::baseMethod(); // This calls the baseMethod() of the Base class directly

    // Create an instance of the derived class
    Derived d;
    // Call derived class method
    d.derivedMethod(); // This calls the derivedMethod() of the Derived class

    return 0;
}