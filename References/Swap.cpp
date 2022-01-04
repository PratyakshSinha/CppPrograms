#include<iostream>
using namespace std;

void swapByReference(int *a, int *b)
{
    int temp;
    cout<<a<<endl<<b<<endl<<&temp<<endl;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapByValue(int , int);

int main()
{
    int x, y;
    cout<<&x<<endl<<&y<<endl;
    cout<<"Current Value of x = "<<x<<endl<<"Current Value of y = "<<y<<endl;
    swapByReference(&x, &y);
    cout<<"Current Value of x = "<<x<<endl<<"Current Value of y = "<<y<<endl;
    return 0;
}