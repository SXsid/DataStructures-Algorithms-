#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int n = (N + 1) / 2;
    for (int i = 0; i < N; ++i)
    {
        if (i < n)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
            for (int k = 0; k < 2 * (n - i - 1); k++)
            {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        if (i >= n)
        {
            for (int j = N - i; j > 0; j--)
            {
                cout << "*";
            }
            for (int k = 0; k < 2 * (i - n + 1); k++)
            {
                cout << " ";
            }
            for (int j = N - i; j > 0; j--)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}