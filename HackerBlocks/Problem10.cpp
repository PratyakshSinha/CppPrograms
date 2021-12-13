#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
    {
        if(a==0)
            return b;
        if(b==0)
            return a;
        if(a==1||b==1)
            return 1;
        if(a==b)
            return a;

        return(b,a%b);
    }

int main()
{
    long long int a, b;
    cin>>a>>b;
    if(a%b == 0)
    {
        cout<<a;
        return 0;
    }
    if(b%a == 0)
    {
        cout<<b;
        return 0;
    }
    if(a<b){
        cout<<gcd(b,a);
    }
    else
        cout<<gcd(a,b);

    return 0;
}