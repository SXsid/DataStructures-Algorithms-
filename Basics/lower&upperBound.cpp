#include <bits/stdc++.h>
using namespace std;

int ifItOccurs(int arr[], int val, int n)
{

    int index = lower_bound(arr, arr + n, val) - arr;
    if (index != n, val == arr[index])
        return 1;
    else
        return -1;
}

int lastOcur(int arr[], int val, int n)
{
    int index = upper_bound(arr, arr + n, val) - arr;
    index--;
    if (index >= 0 && arr[index] == val)
        return index;
    else
        return -1;
}

int main()
{
    int arr[] = {1, 4, 4, 4, 9, 9, 10, 11};
    // return if 1 if x exist nad -1 if it doent
    // cout << ifItOccurs(arr, 91, 8);
    cout << lastOcur(arr, 12, 8);
    return 0;
}