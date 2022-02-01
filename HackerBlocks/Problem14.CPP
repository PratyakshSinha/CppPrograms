#include<iostream>
using namespace std;

int main()
{
    int n, t = 0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for (int j = 0; j < i; j++)
        {
            t++;
            cout<<t<<"\t";
        }
        cout<<endl;
    }
}