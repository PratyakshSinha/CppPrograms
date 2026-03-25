#include <iostream>
#include <string>
#include <unordered_map>

bool isAnagram(std::string s, std::string t) {
    if(s.size() != t.size()){
        return false;
    }

    std::unordered_map<char, int> st1, st2;

    for(int i = 0; i < s.size(); i++){
        st1[s[i]]++;
        st2[t[i]]++;
    }

    return st1 == st2;
}

int main() {
    std::cout << isAnagram("anagram", "nagaram") << "\n"; // Expected: 1
    std::cout << isAnagram("rat", "car") << "\n";         // Expected: 0
    std::cout << isAnagram("ab", "a") << "\n";            // Expected: 0

    return 0;
}