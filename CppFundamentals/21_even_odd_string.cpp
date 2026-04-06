#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

std::mutex m;
std::condition_variable cv;
int turn;

void printOdd(std::string& s){
    for(int i = 1; i < s.size(); i+=2)
    {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, [](){ 
            return turn == 1; 
        });
        std::cout << s[i];
        turn = 0;
        cv.notify_one();
    }
}

void printEven(std::string& s){
    for(int i = 0; i < s.size(); i+=2)
    {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, [](){ 
            return turn == 0; 
        });
        std::cout << s[i];
        turn = 1;
        cv.notify_one();
    }
}

int main() {

    std::string s = "Pratyaksh";

    std::thread t1(printEven, std::ref(s));
    std::thread t2(printOdd, std::ref(s));

    t1.join();
    t2.join();

    return 0;
}
