#include<bits/stdc++.h>
using namespace std;

// vector<int> countSmaller(vector<int>&v){
//     int n = v.size();
//     vector<int>v(n,0);
// }

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v(n,0);
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])v[i]++;
        }
    }
    for(auto x:v)cout<<x<<" ";
}