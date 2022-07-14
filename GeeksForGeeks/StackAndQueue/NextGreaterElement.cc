// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>v;
        stack<long long>stk;
        v.push_back(-1);
        stk.push(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(!stk.empty() and arr[i]>=stk.top()){
                stk.pop();
            }
            if(stk.empty()){
                v.push_back(-1);
            }
            else{
            v.push_back(stk.top());
            }
            stk.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        /*
        Just needed to traverse array from the end 
        stack<int> S;
        vector<long long> returnVector;
        returnVector.reserve(n);
        S.push(0);
        int i = 1;
        for(int i = 1;i<n;i++)
        {
            while(!S.empty()&&arr[i]>arr[S.top()])
            {
                returnVector[S.top()] == arr[i];
                S.pop();
            }
            if(!S.empty()&&arr[i]<arr[S.top()])
            {
                S.push(i);
            }
        }

        while(!S.empty())
        {
            returnVector[S.top()] = -1;
            S.pop();
        }

        return returnVector; 
        */

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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends