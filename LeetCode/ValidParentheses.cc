#include<bits/stdc++.h>
using namespace  std;;

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for(auto& ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            } else {
                auto top = st.top();
                if(ch == ')' && top != '('){
                    return false;
                } else if(ch == '}' && top != '{') {
                    return false;
                } else if(ch == ']' && top != '['){
                    return false;
                } else {
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};