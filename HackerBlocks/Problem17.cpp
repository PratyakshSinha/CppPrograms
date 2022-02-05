#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(j<=i)
                cout<<j<<"\t";
            else
                cout<<"\t";
        }

        for(int j = n-1;j>i-1;j--){
            if(j<=i)
                cout<<j<<"\t";
            else
                cout<<"\t";
        }

        for(int j = i;j>0;j--){
            if(j<i)
                cout<<j<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    printPattern(n);
}
