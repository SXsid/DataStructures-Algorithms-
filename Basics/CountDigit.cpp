#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value = n;
    int count = 0;
    while (value != 0)
    {
        int digit = value % 10;
        if (digit > 0 && n % digit == 0)
            count++;
        value = value / 10;
    }
    cout << count;
    return 0;
}