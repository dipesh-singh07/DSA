#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n){
    if(n==1 || n==0)return 0;
    int prime = 0;
    for(int i=2;i<n;i++){
        int cnt = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0)cnt++;
        }
        if(cnt == 2){
            prime++;
        }
    }
    return prime;
}

int main(){
    int n;
    cin>>n;
    cout<<countPrimes(n)<<endl;
}