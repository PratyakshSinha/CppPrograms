#include<iostream>
using namespace std;

int main()
{
    int x, i, counter = 0, temp;
    int Arr[2];
    Arr[0] = 500;
    while(x!=5625)
    {
        temp = Arr[1];
        cin>>x;
        if(x>Arr[0])
            counter++;
        Arr[0] = Arr[1];
        Arr[1] = x;
    }
    cout<<counter;
}