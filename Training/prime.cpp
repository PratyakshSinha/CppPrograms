#include<iostream>
using namespace std;

int main()
    {
        int x,flag = 0;
        cin>>x;
        for(int i = 2; i<x/2; i++)
            {
                if(x%i == 0)
                    {
                        flag = -1;
                        break;
                    }
            }
        if(flag == 0)
            cout<<"Prime";
        else
            cout<<"Not Prime";

        return 0;
    }