#include<bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int high = n, low = 1;
        int mid;
        int result = n;

        while(low<=high)
        {
            mid = (high+low)/2;
            if(isBadVersion(mid))
            {
                result = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        return result;
    }
};