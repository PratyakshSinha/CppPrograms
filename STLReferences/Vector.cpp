#include <iostream>
#include <vector>
using namespace std;

int main()
    {
        vector<vector<int>> v;
        int x;
        v.resize(5);
        for(int i = 0;i<5;i++)
        {
            for(int j = 0;j<2;j++)
            {
            cin>>x;
            v[i].push_back(x);
            }    
        }

        for(int i =0;i<5;i++)
        {
            for(int j = 0;j<2;j++)
            {cout<<v[i][j];}
        }

        return 0;
    }