#include <bits/stdc++.h>
using namespace std;
void print(int n, string name)
{
    if (n > 0)
    {
        cout << name << endl;
        return print(n - 1, name);
    }
}
void print1toN(int i, int n)
{
    if (i <= n)
    {
        cout << i << endl;
        return print1toN(++i, n);
    }
}
void printNto1(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        return printNto1(n - 1);
    }
}

void nto1Bakctrancing(int i, int n)
{
    if (i > n)
    {
        return;
    }
    nto1Bakctrancing(i + 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    // print(n, "aman");
    // print1toN(1, n);
    // printNto1(n);
    nto1Bakctrancing(1,n);
    return 0;
}
