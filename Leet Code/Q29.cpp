#include <bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor)
{
    if(dividend == INT_MIN && divisor == -1)return INT_MAX;
    int c = 0;
    int i = divisor;
    if (divisor < 0 && dividend > 0)
    {
        divisor = -divisor;
        i = divisor;
        while (i <= dividend)
        {
            c++;
            i += divisor;
        }
        c = -c;
    }
    if (dividend < 0 && divisor>0){
        dividend = -dividend;
        while (i <= dividend)
        {
            c++;
            i += divisor;
        }
        c = -c;
    }
        
    while (i <= dividend)
    {
        c++;
        i += divisor;
    }
    return c;
}

int main()
{
    int divisor, dividend;
    cin >> dividend >> divisor;
    cout << divide(dividend, divisor) << endl;
}