#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size(), m = s2.size();
    vector<int>pro(n+m,0);
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            int mul = (s1[i]-'0')*(s2[j]-'0');
            int sum = mul + pro[i+j+1];
            pro[i+j+1]=sum%10;
            pro[i+j]+=sum/10;
        }
    }  
    
    string ans = "";
    for(int x:pro){
        if(!(x==0 && ans.empty())){
            ans+=to_string(x);
        }
    }
    cout<<ans<<endl;
    
}