#include <bits/stdc++.h>
using namespace std;

int res(int temp1, int temp2, int op)
{
    switch(op){
        case 1: return temp1+temp2;
        case 2: return temp1-temp2;
        case 3: return temp1*temp2;
        case 4: return temp1/temp2;
    }
}

class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> stk;
        int temp1, temp2;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == "+"){
                temp1 = stk.top();
                stk.pop();
                temp2 = stk.top();
                stk.pop();
                stk.push(res(temp1, temp2, 1));
            }
            else if(s[i] == "-"){
                temp1 = stk.top();
                stk.pop();
                temp2 = stk.top();
                stk.pop();
                stk.push(res(temp1, temp2, 2));
            }
            else if(s[i] == "*"){
                temp1 = stk.top();
                stk.pop();
                temp2 = stk.top();
                stk.pop();
                stk.push(res(temp1, temp2, 3));
            }
            else if(s[i] == "/"){
                temp1 = stk.top();
                stk.pop();
                temp2 = stk.top();
                stk.pop();
                stk.push(res(temp1, temp2, 4));
            }
            else{
                stk.push(stoi(s[i]));
            }
        }
        return stk.top();
    }
};