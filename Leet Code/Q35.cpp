#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target){
    int indx;
    indx = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
    return indx;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int key;
    cin>>key;
    cout<<searchInsert(v,key)<<endl;
}