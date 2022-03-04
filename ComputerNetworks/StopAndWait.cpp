#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main()
{
    vector<int> Spackage = {1,2,3,4,5,6,7,8,9,10}, Rpackage;
    int x, flag = Spackage.size(), i = 0, n = 2;
    while(flag)
    {
        //srand(time(NULL));
        x = rand() % 10;
        if(x%2==0){
            Rpackage.push_back(Spackage[i]);
            cout<<"Package "<<i+1<<" sent"<<endl;
            i++;
            flag--;
        }

        if(x%2==1){
            cout<<"Package not sent"<<endl;
            Sleep(2000);
        }
    }
}