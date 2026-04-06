#include <iostream>
#include <vector>

void backtrack(std::vector<int>& candidates, int target, std::vector<int>& curr, int i, std::vector<std::vector<int>>& res){
    
    if(target == 0){
        res.push_back(curr);
        return;
    }

    if(target < 0 || i>=candidates.size()){
        return;
    }

    backtrack(candidates, target, curr, i+1, res);
    target = target - candidates[i];
    curr.push_back(candidates[i]);
    backtrack(candidates, target, curr, i, res);
    curr.pop_back();
}

std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
    std::vector<std::vector<int>> res;
    std::vector<int> curr;
    backtrack(candidates, target, curr, 0, res);
    return res;
}

int main() {
    std::vector<int> c1 = {2, 3, 6, 7};
    for(auto& combo : combinationSum(c1, 7)){
        std::cout << "[ ";
        for(auto n : combo) std::cout << n << " ";
        std::cout << "]\n";
    }
    std::cout << "---\n";

    std::vector<int> c2 = {2, 3, 5};
    for(auto& combo : combinationSum(c2, 8)){
        std::cout << "[ ";
        for(auto n : combo) std::cout << n << " ";
        std::cout << "]\n";
    }

    return 0;
}