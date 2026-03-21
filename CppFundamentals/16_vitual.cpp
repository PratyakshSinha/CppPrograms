#include <iostream>

class Animal
{
public:
    virtual void speak()
    {
        std::cout << "Some Sound\n";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        std::cout << "Woof\n";
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        std::cout << "Meow\n";
    }
};


int main() {
    Animal* a = new Dog();
    Animal* b = new Cat();

    a->speak();
    b->speak();

    delete a;
    delete b;
    return 0;
}