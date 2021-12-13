#include<iostream>
#include<math.h>
using namespace std;

double root(int a);

int main()
    {
        int x;
        cout<<"Enter a number: ";
        cin>>x;
        if(x<0)
            cout<<root(x)<<"i";
        else
            cout<<root(x);
        return 0;
    }

double root(int a){
    double root;
    if(a<0){
        root = sqrt(abs(a));
    }
    else{
        root = sqrt(a);
    }
    return root;
}