#include<iostream>
using  namespace std;

int main()
    {
        int a,temp,count=0;
        cin>>a;
        temp = a;
        while(temp != 0){
            temp = temp/10;
            count++;
        }
        
    }