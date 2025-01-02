#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    // find gcd
    int GCD = 1;
    for (int i = min(a, b); i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i;
            break;
        }
    }
    int LCM = (a * b) / GCD;
    cout << GCD << "lcm is :" << LCM;
    return 0;
}