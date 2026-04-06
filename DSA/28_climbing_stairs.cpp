#include <iostream>
#include <vector>

int helper(int n, std::vector<int>& memo){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(memo[n] != 0) return memo[n];
    memo[n] = helper(n-1, memo) + helper(n-2, memo);
    return memo[n];
}

int climbStairs(int n) {
    std::vector<int> memo(n+1, 0);
    return helper(n, memo);
}

int main() {
    std::cout << climbStairs(2) << "\n"; // Expected: 2
    std::cout << climbStairs(3) << "\n"; // Expected: 3
    std::cout << climbStairs(5) << "\n"; // Expected: 8

    return 0;
}