// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        
        long long int FibonacciArray[n];
        const int MOD = 1000000007;
        FibonacciArray[0] = 0;
        FibonacciArray[1] = 1;

        for(int i = 2;i<=n;i++)
        {
            FibonacciArray[i] = (FibonacciArray[i-1] + FibonacciArray[i-2])%MOD;
        }

        return FibonacciArray[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends