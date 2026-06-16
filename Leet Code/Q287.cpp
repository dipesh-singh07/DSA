#include<bits/stdc++.h>
using namespace std;

int findDuplicatesS(vector<int>&v){
    unordered_set<int>s;
    for(auto x:v){
        if(s.count(x))return x;
        s.insert(x);
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<findDuplicatesS(v)<<endl;
}