#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];

	vector<int>dp(n+1);
	dp[0] = 0;
	for(int i=1;i<=n;i++){
		dp[i] = dp[i-1] + arr[i-1];
	}
	cout<<dp[n]<<endl;
}