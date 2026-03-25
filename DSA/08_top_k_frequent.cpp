#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> mp;
    for(auto it : nums){
        mp[it]++;
    }

    std::vector<std::pair<int, int>> temp;
    for(auto it : mp){
        temp.push_back({it.first, it.second});
    }

    std::sort(temp.begin(), temp.end(), [](auto& a, auto&b){
        return a.second > b.second; 
    });

    std::vector<int> res;
    for(int i = 0 ;i < k; i++){
        res.push_back(temp[i].first);
    }
    return res;
}

int main() {
    std::vector<int> nums1 = {1,1,1,2,2,3};
    auto r1 = topKFrequent(nums1, 2);
    for(auto n : r1) std::cout << n << " ";
    std::cout << "\n"; // Expected: 1 2

    std::vector<int> nums2 = {1};
    auto r2 = topKFrequent(nums2, 1);
    for(auto n : r2) std::cout << n << " ";
    std::cout << "\n"; // Expected: 1

    return 0;
}