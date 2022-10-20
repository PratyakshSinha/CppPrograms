//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
public:
    
    //Still trying to figure out how the subset sorts itself.
    
    void helper(int i, int N, vector<int>& arr, vector<int>& res, int currSum)
    {
        if(i==N)
        {
            res.push_back(currSum);
            return;
        }
        //res.insert(arr[i]);
        helper(i+1, N, arr, res, currSum+arr[i]);
        helper(i+1, N, arr, res, currSum);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        helper(0, N, arr, res, 0);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends