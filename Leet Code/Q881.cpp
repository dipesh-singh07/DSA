#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int> &people, int limit)
{
    int n = people.size();
    sort(people.begin(),people.end());
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(people[i]<=limit)cnt++;
        if((people[i]+people[n-i-1])<=limit)cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int limit;
    cin>>limit;
    cout<<numRescueBoats(v,limit);
}