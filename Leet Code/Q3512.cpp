#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> &nums, int k)
{
    int s = 0;
    for (auto x : nums)
        s += x;
    if (k > s)
        return s;
    if (k == s)
        return 0;
    int cnt = 0;
    while (s % k != 0)
    {
        s--;
        cnt++;
    }
    return cnt;
}

int main()
{
    vector<int>v = {3,9,7};
    int k = 5;
    cout<<minOperations(v,k);
}