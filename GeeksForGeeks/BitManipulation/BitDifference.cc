// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B

    //110
    //11
    //1
    //0
    int countSetBits(int n)
    {
        // base case
        if (n == 0)
            return 0;
        else
            // if last bit set add 1 else add 0
            return (n & 1) + countSetBits(n >> 1);
    }

    int countBitsFlip(int a, int b){
        
        int temp = a^b;
        return countSetBits(temp);
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends