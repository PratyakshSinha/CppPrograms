#include <iostream>
#include <vector>

void backtrack(std::vector<int>& nums, std::vector<int> curr, int index, std::vector<std::vector<int>>& res){
    if(index >= nums.size()){
        res.push_back(curr);
        return;
    }
    backtrack(nums, curr, index+1, res);
    curr.push_back(nums[index]);
    backtrack(nums, curr, index+1, res);
}

std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
    std::vector<std::vector<int>> res;
    std::vector<int> curr;
    backtrack(nums, curr, 0, res);
    return res;
}

int main() {
    std::vector<int> nums1 = {1, 2, 3};
    for(auto& subset : subsets(nums1)){
        std::cout << "[ ";
        for(auto n : subset) std::cout << n << " ";
        std::cout << "]\n";
    }
    std::cout << "---\n";

    std::vector<int> nums2 = {0};
    for(auto& subset : subsets(nums2)){
        std::cout << "[ ";
        for(auto n : subset) std::cout << n << " ";
        std::cout << "]\n";
    }

    return 0;
}