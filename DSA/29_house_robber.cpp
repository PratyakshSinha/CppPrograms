#include <iostream>
#include <vector>

int rob(std::vector<int>& nums) {

    if(nums.size() == 1){
        return nums[0];
    }
    if(nums.size() == 2){
        return std::max(nums[0], nums[1]);
    }

    std::vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    dp[1] = std::max(nums[0], nums[1]);
    for(int i = 2; i < nums.size(); i++){
        dp[i] = std::max(nums[i] + dp[i-2], dp[i-1]);
    }

    return dp[nums.size() - 1];
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 1};
    std::cout << rob(nums1) << "\n"; // Expected: 4

    std::vector<int> nums2 = {2, 7, 9, 3, 1};
    std::cout << rob(nums2) << "\n"; // Expected: 12

    std::vector<int> nums3 = {2, 1};
    std::cout << rob(nums3) << "\n"; // Expected: 2

    return 0;
}