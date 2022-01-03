#include <iostream>
#include <type_traits>

struct Parent1 {
    void speak() const {
        std::cout << "woof\n";
    }
};

struct Parent2 {
    virtual void speak() const { // note: virtual
        std::cout << "meow\n";
    }
};

struct Child1 : public Parent1 {
    void speak() const {
        std::cout << "hisss\n";
    }
};

struct Child2 : public Parent2 {
    void speak() const override {
        std::cout << "baaah\n";
    }
};

int main() {
    const Parent1& a = Child1();
    const Parent2& b = Child2();
    
    a.speak();
    b.speak();

    
    static_assert(std::is_polymorphic<Parent2>::value || !std::has_virtual_destructor<Parent2>::value, "Memory leaks in Parent and its derived classes exist");
    
}