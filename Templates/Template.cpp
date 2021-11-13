#include <iostream>
using namespace std;

template<typename T> void sp(T& a, T&b)
    {
        T temp = a;
        a = b;
        b = temp;
    }

int main()
    {
        int a = 5,b = 10;
        cout<<a<<" "<<b<<endl;
        sp(a, b);               // Can also be invoked as sp<int>(a,b)
        cout<<a<<" "<<b<<endl;

        char c = 'c', d = 'd';
        cout<<c<<" "<<d<<endl;
        sp(c,d);                // Can also be invoked as sp<char>(a,b)
        cout<<c<<" "<<d<<endl;
        return 0;
    }