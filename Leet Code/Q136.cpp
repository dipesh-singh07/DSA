#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>&v){
    unordered_set<int>s;
    for(int i=0;i<v.size();i++){
        if(s.count(v[i]))s.erase(v[i]);
        s.insert(v[i]);
    }
    return *s.begin();
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<singleNumber(v)<<endl;
}