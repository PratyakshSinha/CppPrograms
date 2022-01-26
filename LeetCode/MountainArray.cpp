#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size()<3)
            return false;

        int pos = std::distance(arr.begin(), max_element(arr.begin(), arr.end()));

        if(pos==arr.size()-1|| pos==0)
        {
            return false;
        }

        for (int i = 0; i < pos; i++)
        {    
            if(arr[i]>=arr[i+1])
            return false;
        }

        for (int i = pos; i < arr.size()-1; i++)
        {
           if(arr[i]<=arr[i+1])
            return false;
        }

        return true;
        
    }
};
