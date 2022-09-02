#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while(x)
        {
            reverse = reverse*10 + x%10;
            x/=10;
            if(reverse == 214748364)
            {
                if(x>7)
                    return 0;
            }
            if(reverse == -214748364)
            {
                if(x<-8)
                    return 0;
            }
        }

        return reverse;
    }
};