#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector <int>> res;
    for(int i = 0 ; i < nums.size() - 2 ; i++){
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        int p1 = i+1;
        int p2 = nums.size()-1;

        while(p1 < p2) {
            int sum = nums[i] + nums[p1] + nums[p2];
            if(sum == 0){
                res.push_back({nums[i], nums[p1], nums[p2]});
                while(p1 < p2 && nums[p1] == nums[p1+1]) p1++;
                while(p1 < p2 && nums[p2] == nums[p2-1]) p2--; 
                p1++;
                p2--;
            }
            else if(sum < 0) {
                p1++;
            } else if(sum > 0){
                p2--;
            }
        }
    }
    return res;
}

int main() {
    std::vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    std::vector<int> nums2 = {0, 0, 0};
    std::vector<int> nums3 = {1, 2, 3};

    for (auto& triplet : threeSum(nums1))
        std::cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    std::cout << "---\n";
    for (auto& triplet : threeSum(nums2))
        std::cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    std::cout << "---\n";
    for (auto& triplet : threeSum(nums3))
        std::cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";

    return 0;
}