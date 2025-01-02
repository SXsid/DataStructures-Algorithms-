#include <bits/stdc++.h>
using namespace std;

int main()
{
    // equalidean alog = gcd(a,b) ,a>b=>gcd(a-b,b)
    // so by this gcd(a,b ) = gcd(a%b,b) minus is the value after division!!
    int a, b;
    cin >> a >> b;
    while (a != 0 && b != 0)
    {
        // impleimte diison by swap
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b;
    else
        cout << a;
    return 0;
}