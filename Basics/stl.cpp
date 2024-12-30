#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> a[] = {{1, "sid"}, {10, "aman"}};

    vector<int> arr = {1, 2, 3, 4};
    vector<int>::iterator it = arr.begin();

    // for (it; it != arr.end(); it++)
    // {
    //     cout << *(it) << endl;
    // }
    vector<int> arr2 = {9, 8, 7, 6, 5};
    arr.insert(arr.begin() + 1, 2, 20);
    arr.insert(arr.end(), arr2.begin(), arr2.end());
    arr.erase(arr.begin() + 1, arr.begin() + 3);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << string(10, '-') << "quee" << string(10, '-') << endl;
    queue<int> q1;
    q1.push(1);
    q1.push(5);
    q1.push(8);
    q1.push(10);
    while (!q1.empty())
    {
        // sbse aage kon kdha h
        cout << q1.front();
        q1.pop();
    }
    // max heap
    cout << string(4, '-') << "Priorityquee" << string(4, '-') << endl;
    priority_queue<int> q2;
    q2.push(1);
    q2.push(5);
    q2.push(8);
    q2.push(10);
    while (!q2.empty())
    {
        // sbse bda kon h
        cout << q2.top();
        q2.pop();
    }

    // min heap
    cout << string(4, '-') << "acsending que" << string(4, '-') << endl;
    priority_queue<int, vector<int>, greater<int>> q3;
    q3.push(10);
    q3.push(2);
    q3.push(0);
    q3.push(5);
    while (!q3.empty())
    {
        // sbse bda kon h
        cout << q3.top();
        q3.pop();
    }

    return 0;
}