#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val){
    nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
    return nums.size();
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int key;
    cin>>key;
    removeElement(v,key);
    cout<<endl;
    for(auto x:v)cout<<x<<" ";
}