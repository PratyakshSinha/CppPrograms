#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int res = 0;
        bool flag = 1;
        for(int i = 0;i<s.size();i++)
        {
            if((s[i]>=65 and s[i]<=90) or (s[i]>=97 and s[i]<=122) or s[i] == '.')
                return 0;
            if(s[i] == '-' or s[i] == '+' or (s[i]>=48 and s[i]<=57))
            {
                int temp = i;
                
                if(s[i] == '-')
                {
                    flag = 0;
                    temp++;
                }
                else if(s[i] == '+')
                {
                    flag = 1;
                    temp++;
                }
                /*
                    2147483640
                */
                while(temp!=s.size() and (s[temp]>=48 and s[temp]<=57))
                {

                    if(res>INT_MAX/10 or (res == INT_MAX/10 and s[temp]-'0' > INT_MAX%10))
                        return (flag == 1) ? INT_MAX : INT_MIN;
/* 
                    learn to use constants please
                    if(res >= 214748364 and flag == 0)
                    {   //    21474836460
                        
                        if(s[temp]<=56 and res == 214748364)
                        {
                            res = res*10 + (s[temp] - 48);
                            break;
                        }
                        else
                            return -2147483648;
                    }
                    else if(res >= 214748364 and flag == 1)
                    {
                        if(s[temp]<=56 and res == 214748364)
                        {
                            res = res*10 + (s[temp] - 48);
                            break;
                        }
                        else
                            return 2147483647;
                    }                  
*/
                    res = res*10 + (s[temp] - 48);
                    temp++;
                }
                break;
            }
            
        }
        if(flag == 0)
            res*=-1;
        
        if(res<=(-1*pow(2,31)))
            return -1*pow(2,31);
        else if(res>=(pow(2,31)-1))
            return pow(2,31) - 1;

        return res;
    }
};