#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    if(n<0 || (n%10==0 && n!=0)) return false;

    long rev=0;
    while(n>rev){
        rev = (rev * 10) + n % 10;
        n/=10;
    }
    return (n==rev || n==rev/10);
}

int main(){
    int n;
    cin>>n;
    bool t = palindrome(n);
    if(t)cout<<"true";
    else cout<<"false";
}