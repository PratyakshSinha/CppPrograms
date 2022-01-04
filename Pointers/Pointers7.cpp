#include<iostream>
#include<string>
#include<memory>
using namespace std;

int main()
    {
        unique_ptr<int>unPtr1 = make_unique<int>(25);
        cout << unPtr1.get() << endl;
        cout << *unPtr1 <<endl;
        

        system("pause>nul");
    }