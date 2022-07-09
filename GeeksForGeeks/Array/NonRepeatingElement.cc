// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int, int> hash;
        unordered_map<int, int>::iterator it;
        int returnValue = 0;
        for(int i = 0;i<n;i++)
        {
            it = hash.find(arr[i]);
            if(it!=hash.end())
            {
                it->second++;
            }
            else
                hash.insert(make_pair(arr[i], 1));
        }

        for(auto it: hash)
        {
           if(it.second == 1)
            returnValue = it.first;
        }

        return returnValue;
        
    } 
  
};


// { Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends