#include <bits/stdc++.h>
using namespace std;

int fact(int i, int n)
{

    if (n <= 0)
        return i;
    i *= n;
    return fact(i, n - 1);
}

void printNos(int i, int n)
{

    cout << i << endl;
    if (i == n)
        return;
    printNos(++i, n);
}
int main()
{
    int n;
    cin >> n;
    printNos(1, 5);
    cout << fact(1, n);
    return 0;
}