#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::unordered_map<std::string, std::vector<std::string>> mp;
    for(auto str : strs){
        std::string temp = str;
        std::sort(temp.begin(), temp.end());
        mp[temp].push_back(str);
    }

    std::vector<std::vector<std::string>> res;
    for(auto it : mp){
        res.push_back(it.second);
    }

    return res;
}

int main() {
    std::vector<std::string> s1 = {"eat","tea","tan","ate","nat","bat"};
    for(auto& group : groupAnagrams(s1)){
        std::cout << "[ ";
        for(auto& s : group) std::cout << s << " ";
        std::cout << "]\n";
    }
    std::cout << "---\n";

    std::vector<std::string> s2 = {""};
    for(auto& group : groupAnagrams(s2)){
        std::cout << "[ ";
        for(auto& s : group) std::cout << s << " ";
        std::cout << "]\n";
    }
    std::cout << "---\n";

    std::vector<std::string> s3 = {"a"};
    for(auto& group : groupAnagrams(s3)){
        std::cout << "[ ";
        for(auto& s : group) std::cout << s << " ";
        std::cout << "]\n";
    }

    return 0;
}