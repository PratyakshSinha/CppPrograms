// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix(string arr[], int n)
    {
    
        // If size is 0, return empty string
        if (n == 0)
            return "";
    
        if (n == 1)
            return arr[0];
    
        // Sort the given array
        sort(arr, arr + n);
    
        // Find the minimum length from
        // first and last string
        int en = min(arr[0].size(),
                    arr[n - 1].size());
    
        // Now the common prefix in first and
        // last string is the longest common prefix
        string first = arr[0], last = arr[n - 1];
        int i = 0;
        while (i < en && first[i] == last[i])
            i++;
    
        string pre = first.substr(0, i);
        return pre;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// } Driver Code Ends