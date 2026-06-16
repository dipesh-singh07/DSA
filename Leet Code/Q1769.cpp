#include<bits/stdc++.h>
using namespace std;

vector<int> minO(string s){
    int n = s.size();
    vector<int>v(n,0);

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(s[j]=='1')v[i]+=abs(i-j);
    //     }
    // }

    int balls = 0, moves = 0;
    for(int i=0;i<n;i++){
        v[i]+=moves;
        balls += s[i]-'0';
        moves+=balls;
    }
    balls = 0, moves = 0;
    for(int i=n-1;i>=0;i--){
        v[i]+=moves;
        balls += s[i]-'0';
        moves += balls;
    }
    return v;
}

int main(){
    string s = "001011";
    vector<int> vr = minO(s);
    for(auto x:vr)cout<<x<<" ";
}