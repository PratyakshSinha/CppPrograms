// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> sol;
        long long sum = 0;
        int counter = 0;
        int i = 0;
        /*
        works but not optimized

        for(i = 0;i<n&&sum!=s;i++)
        {
            sum = sum+arr[i];
            if(sum>s)
            {
                sum = sum - arr[counter];
                counter++;
            }
        }
        while(counter<n&&sum!=s){
            sum = sum - arr[counter];
            counter++;
        } 
        */

        while (sum != s && i <= n && counter <= n)
        {
            if (sum < s)
            {
                sum = sum + arr[i];
                i++;
            }

            if (sum > s)
            {
                sum = sum - arr[counter];
                counter++;
            }
        }
        if (sum != s)
            sol.push_back(-1);
        else
        {
            sol.push_back(counter + 1);
            sol.push_back(i);
        }
        return sol;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends