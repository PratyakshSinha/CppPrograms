#include<iostream>
using namespace std;

int main()
    {
        int x = 10;
        int* ptr1 = &x;
        int &ptr2 = x;
        int &ptr3 = ptr2;
        cout<<&x<<endl<<ptr1<<endl<<ptr2<<endl<<ptr3;
        return 0;
    }