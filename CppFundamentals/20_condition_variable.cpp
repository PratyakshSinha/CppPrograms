#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

std::mutex m;
std::condition_variable cv;
std::queue<int> dataQueue;
bool finished = false;

void producer(){
    for(int i = 1; i <= 5; i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        {
            std::lock_guard<std::mutex> lock(m);
            dataQueue.push(i);
            std::cout << "Produced: " << i << std::endl;
        }
        cv.notify_one();
    }
    {
        std::lock_guard<std::mutex> lock(m);
        finished = true;
    }
    cv.notify_one();
}

void consumer() {
    while(true){
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, []{
            return !dataQueue.empty() || finished;
        });

        while(!dataQueue.empty()) {
            int val = dataQueue.front();
            dataQueue.pop();
            std::cout << "Consumed: " << val << std::endl;
        }
        if(finished) break;
    }
}

int main() {
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}