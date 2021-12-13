#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
    {
        if(b==0)
            return a;
        return(b,a%b);
    }

int main()
{
    long long int a, b;
    cin>>a>>b;
    if(a==b)
        {
            cout<<a;
            return 0;
        }
    if(a%b==0)
        {
            cout<<a;
            return 0;
        }
    else if(b%a == 0)
        {
            cout<<b;
            return 0;
        }
    if(a<b){
        cout<<(a*b)/gcd(b,a);
    }
    else
        cout<<(a*b)/gcd(a,b);
    return 0;
}