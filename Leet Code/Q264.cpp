#include<bits/stdc++.h>
using namespace std;

int nthUglyNumber(int n){
    vector<int>v(n);
        int i2=0,i3=0,i5=0;
        v[0]=1;
        for(int i=1;i<n;i++){
            int n2=v[i2]*2;
            int n3=v[i3]*3;
            int n5=v[i5]*5;

            v[i]=min(n2,min(n3,n5));
            if(v[i]==n2)i2++;
            if(v[i]==n3)i3++;
            if(v[i]==n5)i5++;
        }
        return v[n-1];
}

int main(){
    int n;
    cin>>n;
    cout<<nthUglyNumber(n);

    return 0;
}