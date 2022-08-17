#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        
        if(n == 0)
            return 0;
        if(n == 1)
          return 1;

        //Standard Approach
        // long long int x1=1, x2=2;
        // long long int x3;
        // for (int i = 0; i < n-2; i++)
        // {
        //     x3 = x1+x2;
        //     x1 = x2;
        //     x2 = x3;
        // }

        //Dynamic Programming approach
        vector<int> FibonacciArray;
        FibonacciArray.reserve(n+1);
        int i;

        FibonacciArray[0] = 0;
        FibonacciArray[1] = 1;

        for(int i = 2;i<n;i++)
        {
            FibonacciArray[i] = FibonacciArray[i-1] + FibonacciArray[i-2];
        }

        return FibonacciArray[n];
    }
};