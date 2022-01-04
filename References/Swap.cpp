#include<iostream>
using namespace std;

void swapByReference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapByValue(int , int);

int main()
{
    int x=5, y=10;
    cout<<"Current Value of x = "<<x<<endl<<"Current Value of y = "<<y<<endl;
    swapByReference(&x, &y);
    cout<<"Current Value of x = "<<x<<endl<<"Current Value of y = "<<y<<endl;
    return 0;
}