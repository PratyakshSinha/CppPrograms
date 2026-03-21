#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> makeNames() {
    std::vector<std::string> names;
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");
    return names;
}

int main() {
    std::vector<std::string> result = makeNames();

    for(const auto& name: result){
        std::cout << name << std::endl;
    }

    return 0;
}