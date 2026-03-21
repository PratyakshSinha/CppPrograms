#include <iostream>
#include <memory>

void passByValue(std::shared_ptr<int> ptr){
    std::cout << "Inside passByValue, refCount: " << ptr.use_count() << std::endl;
}

void passByReference(const std::shared_ptr<int>& ptr){
    std::cout << "Inside passByReference, refCount: " << ptr.use_count() << std::endl;
}

int main() {
    std::shared_ptr<int> a = std::make_shared<int>(42);
    std::cout << "Before any call, ref count: " << a.use_count() << std::endl;

    passByValue(a);
    std::cout << "After passByValue, ref count: " << a.use_count() << std::endl;

    passByReference(a);
    std::cout << "After passbyReference, ref count " << a.use_count() << std::endl;

    return 0;
}