#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9)
        {
            digits[digits.size()-1]++;
            return digits;
        }
        reverse(digits.begin(), digits.end());
        int carry = 1;
        digits[0] = 0;
        for(int i = 1;i<digits.size();i++)
        {
            digits[i] = digits[i]+carry;
            carry = digits[i]/10;
            digits[i] = digits[i]%10;
        }
        if(carry == 1)
            digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};