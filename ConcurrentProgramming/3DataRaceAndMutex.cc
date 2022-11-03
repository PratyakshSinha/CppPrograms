#include<bits/stdc++.h>
#include<thread>
#include<mutex>
using namespace std;

mutex mu;

/* 
void shared_print(string msg, int id)
{
    lock_guard<mutex> guard(mu); // RAII
    //mu.lock();
    cout<<msg<<id<<endl;
    //mu.unlock();
} 
*/

class LogFile{
private:
    mutex m_mutex;
    ofstream f;
public:
    LogFile(){
        f.open("Log.txt");
    }
    void shared_print(string id, int value){
        lock_guard<mutex> guard(mu);
        f<<"From "<< id<<": "<<value<<endl;
    }
};

void function1(LogFile& log)
{
    
    for(int i = 0;i>-100;i--)
        log.shared_print(string("From t1: "), i);
}

int main()
{
    LogFile Log;
    thread t1(function1, ref(Log));

    for(int i = 0;i>-100;i--)
        Log.shared_print(string("From main: "), i);
    t1.join();
    return 0;
}