#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
    {
        vector<int> list1;
        int n, sum = 0, i=0;
        while (true)
        {
            cin>>n;
            list1.push_back(n);
            sum = sum + list1[i];
            if(sum<0)
                break;
            i++;
        }
        sum = 0;
        for(i=0;i<list1.size();i++)
            {
                sum = sum + list1[i];
                if(sum>=0)
                    cout<<list1[i]<<endl;
                else 
                    break;
            }
        return 0;
    }