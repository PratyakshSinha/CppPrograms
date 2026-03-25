#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> mp;
    for(int i = 0;i<nums.size();i++){
        int complement = target - nums[i];
        if(mp.count(complement)){
            return {mp[complement], i};
        }
        mp[nums[i]] = i;
    }
    return {0,0};
}

int main() {
    std::vector<int> nums1 = {2, 7, 11, 15};
    auto r1 = twoSum(nums1, 9);
    std::cout << "[" << r1[0] << ", " << r1[1] << "]\n"; // Expected: [0, 1]

    std::vector<int> nums2 = {3, 2, 4};
    auto r2 = twoSum(nums2, 6);
    std::cout << "[" << r2[0] << ", " << r2[1] << "]\n"; // Expected: [1, 2]

    std::vector<int> nums3 = {3, 3};
    auto r3 = twoSum(nums3, 6);
    std::cout << "[" << r3[0] << ", " << r3[1] << "]\n"; // Expected: [0, 1]

    return 0;
}