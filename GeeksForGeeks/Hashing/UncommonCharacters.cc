//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            map<char, int> m;
            string ans;
            for(int i = 0;i<A.size();i++)
                m[A[i]]++;
            for(int i = 0;i<B.size();i++)
                m[B[i]]++;
            for(auto it: m)
            {
                if(it.second == 1)
                    ans.push_back(it.first);
            }   
            return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends