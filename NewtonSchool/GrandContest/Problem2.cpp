#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

    string s;
    int countN = 0, countT = 0, L;
    cin>>L>>s;
    for(int i = 0;i<L;i++)
    {
        if(s[i]=='N')
            countN++;
        else
            countT++;
    }
    if(countN>countT)
        cout<<"Nutan";
    else
        cout<<"Tulsa";

    return 0;
}
