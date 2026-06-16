#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;

    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
            nums[++j] = nums[i];
    }
    return j + 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int j = removeDuplicates(a);
    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }
}