#include <bits/stdc++.h>
using namespace std;

bool checkOnesSegment(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == '0' && s[i + 1] == '1')
            return false;

    return true;
}

int main()
{
    string s;
    cin >> s;
    bool result = checkOnesSegment(s);
    if(result)cout<<"true";
    else cout<<"false";
}