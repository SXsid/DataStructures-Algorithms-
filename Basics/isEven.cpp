#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Write your code here
    int num = 0;
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            num++;
            if ((n / i) != i)
            {
                num++;
            }
        }
    }
    if (num == 2)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}