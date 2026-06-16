#include<bits/stdc++.h>
using namespace std;

int maxDistinct(string s) {
    // unordered_map<char,int>mp;
    // int cnt = 0;
    // for(auto x:s){
    //     mp[x]++;
    //     cnt++;
    //     if(mp[x]>1)cnt--;
    // }
    // return cnt;

    //alternate way
    unordered_set<char>st;
    for(auto x:s)
        st.insert(x);
    return st.size();


}

int main(){
    string s;
    cin>>s;
    cout<<maxDistinct(s);
}