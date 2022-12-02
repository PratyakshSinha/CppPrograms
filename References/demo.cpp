#include <bits/stdc++.h>

using namespace std;

bool subsetSumUtil(int ind, int target, int count, vector<int>& arr){
    if(count>4)
        return false;
    if(target==0)
        return true;
    
    if(ind == 0)
        return arr[0] == target;

    bool notTaken = subsetSumUtil(ind-1,target,count,arr);
    
    bool taken = false;
    if(arr[ind]<=target)
        taken = subsetSumUtil(ind-1,target-arr[ind],count+1,arr);
        
    return notTaken||taken;
}

bool subsetSumToK(int n, int k, vector<int> &arr){
    //vector<vector<int>> dp(n,vector<int>(k+1,-1));
    
    return subsetSumUtil(n-1,k,1,arr);
}

int main() {

  int n;
  int x;
  vector<int> arr(n);
  cin>>n>>x;
  for(int i = 0;i<n;i++)
    cin>>arr[i];
  if(subsetSumToK(n,x,arr))
    cout<<"1";
  else 
    cout<<"0";
}