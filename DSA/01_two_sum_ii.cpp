#include <iostream>
#include <vector>

// Leetcode problem link -> https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int p1 = 0;
    int p2 = nums.size() - 1;

    std::vector<int> res;

    while(p1 < p2) {
        int sum = nums[p1] + nums[p2];
        if(sum == target){
            res = {p1, p2};
            break;
        }
        if(sum < target){
            p1++;
        }
        if(sum > target){
            p2--;
        }
    }

    return res;
}

int main() {
    // Test case 1
    std::vector<int> nums1 = {2, 7, 11, 15};
    auto result1 = twoSum(nums1, 9);
    std::cout << "[" << result1[0] << ", " << result1[1] << "]\n";

    // Test case 2
    std::vector<int> nums2 = {1, 3, 4, 6, 8};
    auto result2 = twoSum(nums2, 7);
    std::cout << "[" << result2[0] << ", " << result2[1] << "]\n";

    // Test case 3 — target at opposite ends
    std::vector<int> nums3 = {1, 2, 5, 9};
    auto result3 = twoSum(nums3, 10);
    std::cout << "[" << result3[0] << ", " << result3[1] << "]\n";

    return 0;
}