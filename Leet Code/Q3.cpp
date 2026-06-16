#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int n = s.size();
    int i = 0, j = 0, maxlen = 0;
    vector<int> freq(256, 0);
    while (j < n)
    {
        freq[s[j]]++;
        if (freq[s[j]] > 1)
        {
            freq[s[j]]--;
            i++;
        }
        maxlen = max(maxlen, j - i + 1);
        j++;
    }
    return maxlen;
}

int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
}