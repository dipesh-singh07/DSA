#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target){
    int l = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    int r = upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
    if(l<nums.size() && nums[l]==target)
        return {l,r};
    
    return {-1,-1};
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int target;
    cin>>target;
    vector<int>ans = searchRange(v,target);
    for(auto x:ans)cout<<x<<" ";
}