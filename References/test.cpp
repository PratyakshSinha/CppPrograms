#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp = n/3;
    temp = temp*35;
    n = n%3;
    if(n == 1)
        temp+=20;
    else if(n == 2)
        temp += 30;
    cout<<temp;

    return 0;
}