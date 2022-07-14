// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {

        sort(arr, arr+n);
        long long int min1 = 0, min2 = 0;
        for(int i = 0;i<n;i++)
        {
            if(i%2 == 0)
                min1 = min1*10+arr[i];
            else
                min2 = min2*10+arr[i];
        }
        
        return min1+min2;

        /* sort(arr, arr+n);
        long long int min1 = 0, min2 = 0;
        vector<long long int> v1,v2;
        for(int i = 0;i<n;i++)
        {
            if(i%2 == 0)
                v1.push_back(arr[i]);
            else
                v2.push_back(arr[i]);
        }
        int temp1 = v1.size()-1, temp2 = v2.size()-1;
        for(int i = 0;i<v1.size();i++)
        {
            min1+=v1[i] * pow(10,temp1);
            --temp1;
        }
        for(int i = 0;i<v2.size();i++)
        {
            min2+=v2[i] * pow(10,temp2);
            --temp2;
        }
        return min1+min2; */
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends