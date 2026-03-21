#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> st;
        for(const auto it : nums) {
            if(st.count(it) > 0){
                return true;
            }
            st.insert(it);
        }
        return false;
    }
};