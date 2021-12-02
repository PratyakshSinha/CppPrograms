#include<iostream>
using namespace std;

int reverseTheNumber(int temp){
	int ans=0;
	while(temp>0){
		int rem=temp%10;
		ans=ans*10+rem;
		temp=temp/10;
	}
	return ans;
}

int convert0To5(int n){
    int temp=0;
    if(n==0){
      return 5;
    }
    else
    {
        while(n>0){
            int l= n%10;
            if(l==0)
                l=5;
            temp=temp*10+l;
            n=n/10;
        }
        return reverseTheNumber(temp);
    }
}
int main(){
   long long int n;
   cin>>n;
   cout << convert0To5(n);
   return 0;
}