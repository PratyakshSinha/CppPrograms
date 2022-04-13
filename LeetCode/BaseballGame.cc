#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record(ops.size(), 0);
        int pointer = 0;
        int temp;
        for(int i = 0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                pointer++;
                record[i] = record[i-1]+record[i-2];
            }

            else if(ops[i] == "D")
            {
                pointer++;
                record[i] = record[i-1]*2;
            }

            else if(ops[i] == "C")
            {
                record.erase(record.begin(), record.begin()+pointer);
                pointer--;
            }

            else
            {
                pointer++;
                record[i] = stoi(ops[i]);
            }
            //cout<<ops[i];
            //cout<<record[i];
        }
        record.shrink_to_fit();
        return accumulate(record.begin(), record.end(), 0);
    }
};
