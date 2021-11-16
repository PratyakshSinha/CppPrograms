#include<iostream>
using namespace std;

int main()
    {
        int count  = 0 ;
        int i = 3;
        bool prime = false;
        while(count<=100){
            prime = false;
            for(int j = 2;j<i;j++){
                if(i%j==0){
                    prime = true;
                    break;
                }
            }
            if(!prime){
                cout<<i<<endl;
                count++;
            }
            i++;
        }

        return 0;
    }