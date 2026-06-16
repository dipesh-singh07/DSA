#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>&nums){
    int maxm = nums[0];
    int crr = nums[0];
    for(int i=1;i<nums.size();i++){
        crr = max(nums[i],crr + nums[i]);
        maxm = max(crr,maxm);
    }
    return maxm;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>n;
    cout<<maxSubArray(v)<<endl;
}