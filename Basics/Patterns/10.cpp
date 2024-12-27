#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char cha;
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << "-";
        }
        for (cha = 'A'; cha < 'A' + i + 1; cha++)
        {
            cout << cha;
        }
        cha = cha - 2;
        for (cha; cha >= 'A'; cha--)
        {
            cout << cha;
        }
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << "-";
        }
        cout << endl;
    }

    return 0;
}