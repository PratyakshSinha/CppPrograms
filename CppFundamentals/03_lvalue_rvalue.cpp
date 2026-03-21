#include <iostream>
#include <string> 

void printIt(std::string& s){
    std::cout << "lvalue reference: " << s << std::endl;
}

void printIt(std::string&& s){
    std::cout << "rvalue reference: " << s << std::endl;
}

int main() {
    std::string a = "Hello";

    printIt(a);
    printIt("World");
    printIt(std::move(a));

    return 0;
}