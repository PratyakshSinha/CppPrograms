#include <iostream>
#include <memory>
#include <string>

struct Person {
    std::string name;
    std::weak_ptr<Person> friendPtr;

    Person(std::string n) : name(n) {
        std::cout << name << " created\n";
    }

    ~Person() {
        std::cout << name << " destroyed\n";
    }

};

int main() {
    auto alice = std::make_shared<Person>("Alice");
    auto bob = std::make_shared<Person>("Bob");

    alice->friendPtr = bob;
    bob->friendPtr = alice;

    if(auto f = alice->friendPtr.lock()){
        std::cout << "Alice's friend is: " << f->name << std::endl;
    }

    std::cout << "Going out of scope...\n";

    return 0;
}