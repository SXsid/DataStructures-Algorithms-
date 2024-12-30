#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second < p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{
    pair<int, int> arr[] = {{1, 4}, {3, 2}, {0, 1}, {4, 1}};

    // expected output =>{{4,1},{0,1},{3,2},{1,4}}
    sort(arr, arr + 4, comp);
    for (auto it : arr)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}