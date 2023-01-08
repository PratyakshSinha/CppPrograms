#include<bits/stdc++.h>
using namespace std;

int f(int i, int j, vector<int>& nums)
{
    if(j == 0)
        return 0;
    if(i == 0)
    {
        return nums[i] <= j;
    }
    int pick = 0;
    int notPick = f(i-1, j, nums);
    if(nums[i]<=j)
        pick = 1 + f(i-1, j-nums[i], nums);
    return max(pick, notPick);
}

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    vector<int> ans;
    int n = nums.size();
    int m = queries.size();
    for(int i = 0;i<m;i++)
    {
        int temp = f(n, queries[i], nums);
        ans.push_back(temp-1);
    }
    return ans;
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> nums(n), queries(m), ans;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>queries[i];
    }
    
    ans = answerQueries(nums, queries);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }

}