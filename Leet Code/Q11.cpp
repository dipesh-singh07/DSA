#include<bits/stdc++.h>
using namespace std;

int maxWater(vector<int>&v){
    int l=0,r=v.size()-1,ans=0;
    while(l<r){
        int area = min(v[l],v[r])*(r-l);
        ans = max(area,ans);

        if(v[l]<v[r])l++;
        else r--;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<maxWater(v)<<endl;
}