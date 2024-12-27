#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }

        for (int k = 0; k < 2 * (n - i - 1); k++)
        {
            cout << " ";
        }
        for (int l = i + 1; l > 0; l--)
        {
            cout << l;
        }

        cout << endl;
    }
    return 0;
}