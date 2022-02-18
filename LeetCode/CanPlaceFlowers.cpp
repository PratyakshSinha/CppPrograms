#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int count0 = 0;

        for(int i = 0;i<flowerbed.size();i++)
        {
            if(flowerbed[i] == 0&&flowerbed[i-1]!=1&&flowerbed[i+1]!=1)
                count0++;
        }

        if(count0<2*n+1)
            return false;
        
        return true;

    }
};