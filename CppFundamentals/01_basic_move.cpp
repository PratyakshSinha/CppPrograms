#include <iostream>
#include <string>

int main() {

    std::string a = "Hello Word";
    std::string b = a;

    std::cout << "After Copy:\n";
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::string c = std::move(a);

    std::cout << "\nAfter Move:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "c = " << c << std::endl; 

    return 0;
}