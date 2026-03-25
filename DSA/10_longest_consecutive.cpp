#include <iostream>
#include <vector>
#include <unordered_set>

int longestConsecutive(std::vector<int>& nums) {
    std::unordered_set<int> st;
    int res = 0;
    for(int i = 0; i < nums.size(); i++){
        st.insert(nums[i]);
    }

    for(auto it : st){
        int curr = it, seqLen = 1;
        if(!st.count(it-1)){
            while(st.count(curr+1)) {
                seqLen++;
                curr++;
            }
        }
        res = std::max(res, seqLen);
    }
    
    return res;
}

int main() {
    std::vector<int> nums1 = {100, 4, 200, 1, 3, 2};
    std::cout << longestConsecutive(nums1) << "\n"; // Expected: 4

    std::vector<int> nums2 = {0,3,7,2,5,8,4,6,0,1};
    std::cout << longestConsecutive(nums2) << "\n"; // Expected: 9

    std::vector<int> nums3 = {1};
    std::cout << longestConsecutive(nums3) << "\n"; // Expected: 1

    return 0;
}