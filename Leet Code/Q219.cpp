#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int j = min(i + k, (int)nums.size() - 1);
        while (j > i)
        {
            if (nums[i] == nums[j])
                return true;
            j--;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    bool result = containsNearbyDuplicate(v, k);
    if (result)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}