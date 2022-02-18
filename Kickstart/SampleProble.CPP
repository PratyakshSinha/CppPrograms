#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 1;
    cin>>t;
    while(t--)
    {
        int N,M,sum = 0,temp;
        cin>>N>>M;
        for(int i = 0;i<N;i++)
        {
            cin>>temp;
            sum+=temp;
        }
        int y = sum%M;
        cout<<"case #"<<x<<": "<<y;
        x++;
    }
    return 0;
}