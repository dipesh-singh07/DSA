#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int>v;
    int n = *max_element(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1)v.push_back(i+1);
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int>a = findDisappearedNumbers(v);
    for(auto x:a)cout<<x<<" ";

}