#include <bits/stdc++.h>
using namespace std;

int main()
{
    int value;

    cin >> value;
    int num = value;
    int prev = 0;
    while (num != 0)
    {
        int digi = num % 10;
        prev = prev * 10 + digi;

        num = num / 10;
    }

    if (value == prev && value > 0)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
    return 0;
}