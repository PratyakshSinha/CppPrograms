#include<iostream>
#include<thread>
using namespace std;

void myFunc()
{
    cout<<"So, are we there yet?"<<endl;
}

int main()
{
    //myFunc();
    thread t1(myFunc);  //t1 Starts running

    //t1.join();          //main thread waits for t1 to finish 
    t1.detach();        //t1 will run freely (daemon process)
    if(t1.joinable())
    {
        t1.join();
    }
    return 0;
}