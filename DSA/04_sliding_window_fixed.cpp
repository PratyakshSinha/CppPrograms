#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

double findMaxAverage(std::vector<int>& nums, int k) {
    int sum = std::accumulate(nums.begin(), nums.begin() + k, 0);
    double res = INT_MIN;
    for(int i = 0; i <= nums.size() - k; i++){
        double avg = (double)sum/k;
        sum = sum - nums[i];
        if(i+k < nums.size()) sum += nums[i+k];
        res = std::max(res, avg);
    }
    return res;
}

int main() {
    std::vector<int> nums1 = {1, 12, -5, -6, 50, 3};
    std::cout << findMaxAverage(nums1, 4) << "\n"; // Expected: 12.75

    std::vector<int> nums2 = {5, 5, 5, 5, 5};
    std::cout << findMaxAverage(nums2, 2) << "\n"; // Expected: 5.0

    std::vector<int> nums3 = {0, 4, 0, 3, 2};
    std::cout << findMaxAverage(nums3, 1) << "\n"; // Expected: 4.0

    return 0;
}