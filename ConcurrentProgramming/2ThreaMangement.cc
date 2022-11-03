#include<bits/stdc++.h>
#include<thread>
using namespace std;

void function1()
{
    cout<<"Beauty is only skin-deep"<<endl;
}

class Fctor{
public:
    void operator()(string& msg){
        cout<<"T1 says: "<<msg<<endl;
        msg = "Trust is the mother of deceit.";
    }
};

int main()
{ 
    thread::hardware_concurrency();// Indicates how many threads can run on CPU
    //Fctor fct;
    /* 
    string s = "Where there is no trust, there is no love";
    cout<<this_thread::get_id();
    thread t1((Fctor()), move(s));
    cout<<t1.get_id();

    thread t2 = move(t1);

    t1.join();
    cout<<"From main: "<< s <<endl; 
    */
     
    return 0;
}