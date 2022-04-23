#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        //for sorted element & removing duplicates 
        set<int> s;
        for(auto it:arr)
            s.insert(it);
         
        //for pairing sorted elements with its rank
        unordered_map<int,int> m;
        int k=1;
        for(auto it:s)
                m[it]=k++;
        
        
        for(auto &i:arr)
            i=m[i];
        return arr;
    }
};
