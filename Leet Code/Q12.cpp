#include<bits/stdc++.h>
using namespace std;

string roman(int n){
    vector<int>num = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> s = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string binary = "";
    for(int i=0;i<num.size();i++){
        while(n>=num[i]){
            binary+=s[i];
            n-=num[i];
        }
    }
    return binary;

}

int main(){
    int n = 3749;
    string s = roman(n);
    cout<<s<<" ";
}