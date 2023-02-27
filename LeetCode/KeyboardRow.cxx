#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> line1({'q','w','e','r','t','y','u','i','o','p'});
        set<char> line2({'a','s','d','f','g','h','j','k','l'});
        set<char> line3({'z','x','c','v','b','n','m'});
        vector<string> res;
        for(int i = 0;i<words.size();i++)
        {
            set<char> temp;
            string t = words[i];
            transform(t.begin(), t.end(), t.begin(), ::tolower);
            for(int j = 0;j<t.size();j++)
            {
                temp.insert(t[j]);
            }
            if(includes(line1.begin(), line1.end(), temp.begin(), temp.end()) or 
                includes(line2.begin(), line2.end(), temp.begin(), temp.end()) or 
                includes(line3.begin(), line3.end(), temp.begin(), temp.end()))
                res.push_back(words[i]);
        }
        return res;
    }
};