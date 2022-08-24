#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> input;
    string temp;
    for(int i = 0;i<6;i++)
    {
        cin>>temp;
        input.push_back(temp);
    }
    map<char, vector<string>> outputHash;
    //map<char, vector<string>>::iterator itr;
    for(int i = 0;i<6;i++)
    {
        outputHash[input[i][0]].push_back(input[i]);
    }
    cout<<endl;
    for(auto it: outputHash)
    {
        cout<<"'"<<it.first<<"':[";
        for (int i = 0;i<it.second.size();i++)
        {
            cout<<it.second[i];
            if(i != it.second.size()-1)
                cout<<",";
        }
        cout<<"],"<<endl;
    }

    return 0;
}