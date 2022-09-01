#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int, int> mp;
    int k;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    for(int i = 0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto it: mp)
    {
        if(it.second == k)
        {
            cout<<it.first;
            break;
        }
    }
    return 0;
}