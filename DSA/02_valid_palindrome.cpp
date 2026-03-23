#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(std::string s) {
    s.erase(std::remove_if(s.begin(), s.end(), [](char c){return !std::isalnum(c);}), s.end());

    int p1 = 0;
    int p2 = s.size() - 1;

    while(p1 < p2) {
        if(std::tolower(s[p1]) == std::tolower(s[p2])) {
            p1++;
            p2--;
        } else {
            return false;
        }
    }
    return true;
}

bool isPalindromeBetterSolution(std::string s){
    int p1 = 0;
    int p2 = s.size() - 1;
    while(p1 < p2) {
        while (p1 < p2 && !std::isalnum(s[p1])) p1++;
        while (p1 < p2 && !std::isalnum(s[p2])) p2--;
        if(std::tolower(s[p1]) != std::tolower(s[p2])){
            return false;
        }
        p1++;
        p2--;
    }
    return true;
}

int main() {
    std::cout << isPalindrome("A man, a plan, a canal: Panama") << "\n"; // Expected: 1
    std::cout << isPalindrome("race a car") << "\n";                     // Expected: 0
    std::cout << isPalindrome(" ") << "\n";                              // Expected: 1

    return 0;
}