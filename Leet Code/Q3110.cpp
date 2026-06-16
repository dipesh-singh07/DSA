#include<bits/stdc++.h>
using namespace std;

int scoreOfString(string s) {
        int sum = 0;
        for(int i=1;i<s.size();i++){
            int k = (s[i]+0) - (s[i-1]+0);
            sum+=abs(k);
        }
        return sum;
}

int main(){
    string s;
    cin>>s;
    cout<<scoreOfString(s);

}