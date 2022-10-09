#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    cin>>Q;
    map<string, int> mp;
    string temp;
    int marks;
    int cas;
    while(Q--)
    {
        cin>>cas;
        switch(cas)  
        {
            case 1:
                cin>>temp;
                cin>>marks;
                if(mp.find(temp)!=mp.end())
                {
                    mp[temp]+=marks;
                }
                else
                {
                    mp[temp] = marks;
                }
                break;
            case 2:
                cin>>temp;
                mp[temp] = 0;
                break;
            case 3:
                cin>>temp;
                cout<<mp[temp];
                break;
        }       
    }
    return 0;
}
