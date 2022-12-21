//Function Pointers
#include<bits/stdc++.h>
using namespace std;

int getNumber(){
    return 5;
}

int add(int a, int b)
{
    return a+b;
}

int  main()
{
    int(*funcPtr)(int ,int) = add;
    cout<<funcPtr(1,2);
    

    return 0;
}