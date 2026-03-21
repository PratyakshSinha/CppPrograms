#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mutexA;
std::mutex mutexB;

void task1() {
    std::lock_guard<std::mutex> lockA(mutexA);
    std::cout << "Thread 1 locked A" << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    std::cout << "Thread 1 trying to lock B..." << std::endl;
    std::lock_guard<std::mutex> lockB(mutexB);
    std::cout << "Thread 1 locked B" << std::endl;
}

void task2() {
    std::lock_guard<std::mutex> lockB(mutexB);
    std::cout << "Thread 2 locked B" << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    std::cout << "Thread 2 tying to lock A..." << std::endl;
    std::lock_guard<std::mutex> lockA(mutexA);
    std::cout << "Thread 2 locked A" << std::endl;
}

void task3() {
    std::scoped_lock lock(mutexA, mutexB);
    std::cout << "Thread 1 locked A and B" << std::endl;
}

void task4() {
    std::scoped_lock lock(mutexA, mutexB);
    std::cout << "Thread 2 locked A and B" << std::endl;
}

int main() {
    // std::thread t1(task1);
    // std::thread t2(task2);

    // t1.join();
    // t2.join();

    std::thread t3(task3);
    std::thread t4(task4);

    t3.join();
    t4.join();

    std::cout << "Done!" << std::endl;
    return 0;
}