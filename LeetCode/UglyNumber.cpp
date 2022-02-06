#include<bits/stdc++.h>
using namespace std;
//solution by Vidhi
class Solution {
public:
    bool isUgly(int n) {
        
        bool answer=false;
        if(n==1){
            answer=true;
        }else if(n<=0){
            answer=false;
        } else if(n%2==0){
            answer=isUgly(n/2);
        }else if(n%3==0){
            answer=isUgly(n/3);
        }else if(n%5==0){
            answer=isUgly(n/5);
        }else answer=false;
        return answer;

    }
};