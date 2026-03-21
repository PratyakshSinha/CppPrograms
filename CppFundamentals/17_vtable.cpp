#include <iostream>

class Animal{
public:
    virtual void speak() {
        std::cout << "Some Sound\n";
    }

    virtual void move() {
        std::cout << "Some movement\n";
    }
};

class Dog : public Animal {
public:
    void  speak() override {
        std::cout << "Woof\n";
    }

    void move() override {
        std::cout << "Dog Runs\n";
    }
};

int main() {
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of Animal: " << sizeof(Animal) << std::endl;
    std::cout << "Size of Dog: " << sizeof(Dog) << std::endl;

    Animal* a = new Dog();
    a->speak();
    a->move();

    delete a;
    return 0;
}