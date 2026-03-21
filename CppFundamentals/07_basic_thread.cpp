#include <iostream>
#include <thread>

void task(int id){
    for(int i = 0; i < 5; i++){
        std::cout << "Thread: " << id << " says: " << i << std::endl;
    }
}

int main() {
    std::thread t1(task, 1);
    std::thread t2(task, 2);

    t1.join();
    t2.join();

    return 0;
}