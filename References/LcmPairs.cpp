#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
    {
        if(a==b)
            return 0;
        if(b==0)
            return a;
        return(b,a%b);
    }
int main()
{
    long long int a, b, temp, count = 0;
    cin>>a>>b;
    // if(a==b)
    //     {
    //         cout<<a;
    //         return 0;
    //     }
    // if(a%b==0)
    //     {
    //         cout<<a;
    //         return 0;
    //     }
    // else if(b%a == 0)
    //     {
    //         cout<<b;
    //         return 0;
    //     }
    for (int i = 2; i < a; i++)
    {
        for (int j = 2; j < b; j++)
        {
            temp = (i*j)/gcd(i,j);
            if(temp == a)
                count++;
        }
        
    }
    cout<<count;
    return 0;
}