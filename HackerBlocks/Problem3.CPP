#include<iostream>
using namespace std;

int main()
    {
        int n, count = 0, i = 3, j;
        bool prime = false;
        cin>>n;
        for(i = 0;i<n;i++)
            {
                for(j = 2;j<i;j++)
                    {
                        if(i%j!=0)
                            {
                                cout<<i<<endl;
                            }
                    }
            }
    }
