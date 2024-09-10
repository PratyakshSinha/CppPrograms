#include<bits/stdc++.h>
using namespace std;

void solution(int arr[],int n,int k){
    vector<int> nums(arr, arr+n);
    k=k%nums.size();
    reverse(nums.begin(),nums.begin()+(nums.size()-k));
    reverse(nums.begin()+(nums.size()-k),nums.end());
    reverse(nums.begin(),nums.end());
    for(auto it: nums)
    {
        cout << it << " ";
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    solution(arr,n,k);
    return 0;
}

