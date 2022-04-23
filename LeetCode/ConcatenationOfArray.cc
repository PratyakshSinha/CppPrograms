#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer = nums;
        answer.insert(answer.end(), nums.begin(), nums.end());
        return answer;
    }
};