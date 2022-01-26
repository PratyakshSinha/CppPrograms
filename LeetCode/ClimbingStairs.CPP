#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        
        if(n == 1)
            return 1;
        if(n == 2)
         return 2;

        long long int x1=1, x2=2;
        long long int x3;
        for (int i = 0; i < n-2; i++)
        {
            x3 = x1+x2;
            x1 = x2;
            x2 = x3;
        }

        return x3;        

    }
};