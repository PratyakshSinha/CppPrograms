#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> a = std::make_shared<int>(42);
    std::cout << "a value: " << *a << std::endl;
    std::cout << "a ref count: " << a.use_count() << std::endl;

    std::shared_ptr<int> b = a;
    std::cout << "After copying to b: " << std::endl;
    std::cout << "a ref count: " << a.use_count() << std::endl;
    std::cout << "b ref count: " << b.use_count() << std::endl;

    {
        std::shared_ptr<int> c = a;
        std::cout << "Inter inner scope, after copying to c:" << std::endl;
        std::cout << "a ref count: " << a.use_count() << std::endl;
    }

    std::cout << "After c went out of scope" << std::endl;
    std::cout << "a ref count: " << a.use_count() << std::endl;

    return 0;
}