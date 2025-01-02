#include <bits/stdc++.h>
using namespace std;

int Hcf(int num1, int num2)
{
    // o(min(num1,num2)) is the time complexity
    int commoonDivision = 1;
    for (int i = min(num1, num2); i > 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            commoonDivision = i;
            break;
        }
    }
    return commoonDivision;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << Hcf(num1, num2);
    return 0;
}