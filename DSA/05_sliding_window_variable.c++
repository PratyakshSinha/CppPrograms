#include <iostream>
#include <string>
#include <unordered_set>

int lengthOfLongestSubstring(std::string s) {
    std::unordered_set<char> st;
    int left = 0;
    int res = 0;
    for(int right = 0; right < s.size(); right++){
        while(st.count(s[right]) && left < right){
            st.erase(s[left++]);
        }
        st.insert(s[right]);
        res = std::max(res, right - left + 1);
    }

    return res;
}

int main() {
    std::cout << lengthOfLongestSubstring("abcabcbb") << "\n"; // Expected: 3
    std::cout << lengthOfLongestSubstring("bbbbb") << "\n";    // Expected: 1
    std::cout << lengthOfLongestSubstring("pwwkew") << "\n";   // Expected: 3
    std::cout << lengthOfLongestSubstring("") << "\n";         // Expected: 0

    return 0;
}