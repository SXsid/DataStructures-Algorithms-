#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    // symetry point
    int n = (N + 1) / 2;

    // main loop where
    for (int i = 0; i < N; i++)
    {
        // coloum till symmetry
        for (int j = 0; i < n && j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; i >= n && j < N - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}