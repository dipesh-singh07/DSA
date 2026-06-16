#include<bits/stdc++.h>
using namespace std;

int thirdMax(vector<int> &v){
    sort(v.begin(),v.end());
    int n = v.size();
    int cnt = 0;
    for(int i = n-1;i>0;i--){
        if(v[i]!=v[i-1])cnt++;
        if(cnt == 3)return v[i-1];
    }
    return v[n-1];

}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<thirdMax(v)<<endl;
    return 0;
}