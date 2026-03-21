#include <iostream>

class Base{
public:
    Base() {std::cout << "Base Created\n";}
    virtual ~Base() {std::cout << "Base Destroyed\n";}
};

class Derived : public Base{
public:
    Derived() {std::cout << "Derived Created\n";}
    ~Derived() {std::cout << "Derived Destroyed\n";}
};

int main() {
    Base* obj = new Derived();
    delete obj;
    return 0;
}