#include<bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> res;
    if(!binary_search(arr.begin(),arr.end(),k))
    {
        return {-1, -1};
    }
    for(int i = 0;i<arr.size();i++)
    {
        if(arr[i] == k)
        {
            res.first = i;
            while(arr[i] == k)
            {
                res.second = i;
                i++;
            }
            break;
        }
    }
    return res;
}