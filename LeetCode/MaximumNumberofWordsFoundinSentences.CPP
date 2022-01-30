#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int Words = 0, j, maxWord = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            j=0;
            while (sentences[i][j]!=NULL)
            {
                if(sentences[i][j] == ' ')
                    Words++;
                j++;
            }
            if(maxWord<Words)
                maxWord = Words;
            Words = 0;
        }
        return maxWord+1;  
    }
};