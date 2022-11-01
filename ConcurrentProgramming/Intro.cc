#include<bits/stdc++.h>
#include<thread>
using namespace std;

void function1()
{
    cout<<"Beauty is only skin-deep"<<endl;
}

int main()
{
    thread t1(function1); //t1 starts running
    //t1.join(); //main thread waits for t1 to finish
    t1.detach(); //t1 will freely on its own -- daemon process

    if(t1.joinable())
    {
        t1.join(); // once detached forever detached will cause an error
    }

    return 0;
}