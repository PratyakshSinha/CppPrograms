#include<iostream>
using namespace std;

int main()
{
    int n,a=0,b=1,t;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout<<a<<"\t";
            t=a+b;
            a=b;
            b=t;
        }
        cout<<endl;
    }
}