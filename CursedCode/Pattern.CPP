#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    if(n == 1)
        {
            cout<<"*";
        }
    else if(n==3){
        cout<<"\t*\t\n";
        cout<<"*\t*\t*\t\n";
        cout<<"\t*\t\n";
    }
    else if(n==5){
        cout<<"\t\t*\t\n";
        cout<<"\t*\t*\t*\t\n";
        cout<<"*\t*\t*\t*\t*\n";
        cout<<"\t*\t*\t*\t\n";
        cout<<"\t\t*\t\n";
    }
    else if(n==7){
        cout<<"\t\t\t*\t\n";
        cout<<"\t\t*\t*\t*\t\n";
        cout<<"\t*\t*\t*\t*\t*\n";
        cout<<"*\t*\t*\t*\t*\t*\t*\n";
        cout<<"\t*\t*\t*\t*\t*\n";
        cout<<"\t\t*\t*\t*\t\n";
        cout<<"\t\t\t*\t\n";
    }
    else if(n==9){
        cout<<"\t\t\t\t*\t\n";
        cout<<"\t\t\t*\t*\t*\t\n";
        cout<<"\t\t*\t*\t*\t*\t*\n";
        cout<<"\t*\t*\t*\t*\t*\t*\t*\n";
        cout<<"*\t*\t*\t*\t*\t*\t*\t*\t*\n";
        cout<<"\t*\t*\t*\t*\t*\t*\t*\n";
        cout<<"\t\t*\t*\t*\t*\t*\n";
        cout<<"\t\t\t*\t*\t*\t\n";
        cout<<"\t\t\t\t*\t\n";
    }
    return 0;
}
