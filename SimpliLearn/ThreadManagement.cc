#include<iostream>
#include<thread>

using namespace std;

class F{
public:
    void operator()(string s)
    {
            cout<<"Thread t1 says: "<< s <<endl;
            s = "I changed the thread";
    }
};

    //F functor;
int main()
{
    /* 
    string s = "I've got work tomorrow";
    cout<<this_thread::get_id()<<endl; // print the thread id of current thread    
    
    thread t1((F()), move(s));  //if t1(f()) -> error(Most vexing syntax), Move is used because in threads all of the arguments are 
                                //passed as a value
    cout<<t1.get_id()<<endl;    //Prints the thread if of thread t1

    thread t2 = move(t1);
    t2.join();

    cout<<"Message from main: "<<s<<endl; 
    */

    cout<<thread::hardware_concurrency();

    return 0;
}