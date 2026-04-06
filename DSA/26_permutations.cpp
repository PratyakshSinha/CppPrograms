#include <iostream>
#include <vector>

void backtrack(std::vector<int>& nums, std::vector<int>& curr, std::vector<bool>& visited, std::vector<std::vector<int>>& res){
    if(curr.size() == nums.size()){
        res.push_back(curr);
        return;
    }
    for(int i = 0; i < visited.size(); i++){
        if(visited[i]){
            continue;
        }
        visited[i] = true;
        curr.push_back(nums[i]);
        backtrack(nums, curr, visited, res);
        curr.pop_back();
        visited[i] = false;
    }
}

std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<bool> visited(nums.size(), false);
    std::vector<int> curr;
    std::vector<std::vector<int>> res;
    backtrack(nums, curr, visited, res);
    return res;
}

int main() {
    std::vector<int> nums1 = {1, 2, 3};
    for(auto& perm : permute(nums1)){
        std::cout << "[ ";
        for(auto n : perm) std::cout << n << " ";
        std::cout << "]\n";
    }
    std::cout << "---\n";

    std::vector<int> nums2 = {0, 1};
    for(auto& perm : permute(nums2)){
        std::cout << "[ ";
        for(auto n : perm) std::cout << n << " ";
        std::cout << "]\n";
    }

    return 0;
}