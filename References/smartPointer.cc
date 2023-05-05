#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    unique_ptr<int> ptr(&x);
    *ptr+=10;
    cout << ptr.get() << endl;
    cout<<x;
    return 0; 
}