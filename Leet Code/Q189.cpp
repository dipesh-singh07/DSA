#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &v,int k){
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int k;
    cin>>k;
    rotate(v,k);
}