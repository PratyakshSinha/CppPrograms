// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        int lines = 0, temp, j=0;
        static int x = 0;
        for(int i = 0;i<nums.size()-1;i++)
        {
            temp = k;
            j = x;
            while(temp>nums[j])
            {
                temp = temp - nums[j];
                j++;
                x=j;
            }
            lines = lines + pow(temp,2);
        }
        return lines;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}  // } Driver Code Ends