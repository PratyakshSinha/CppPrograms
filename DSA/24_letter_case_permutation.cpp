#include <iostream>
#include <vector>
#include <string>

void backtrack(std::string s, int i, std::vector<std::string>& res) {
    if(i >= s.size()){
        res.push_back(s);
        return;
    }
    if(std::isdigit(s[i])){
        backtrack(s, i+1, res);
        return;
    }
    backtrack(s, i+1, res);
    if(std::isupper(s[i])){
        s[i] = std::tolower(s[i]);
    } else if(std::islower(s[i])){
        s[i] = std::toupper(s[i]);
    }
    backtrack(s, i+1, res);
}

std::vector<std::string> letterCasePermutation(std::string s) {
    std::vector<std::string> res;
    backtrack(s, 0, res);
    return res;
}

int main() {
    for(auto& str : letterCasePermutation("a1b2"))
        std::cout << str << "\n";
    std::cout << "---\n";
    for(auto& str : letterCasePermutation("3z4"))
        std::cout << str << "\n";

    return 0;
}