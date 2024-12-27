#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
            --i;
        }
    }
    return nums.size();
}

int main()
{
    vector<int> nums = {2, 2, 3, 2, 3, 4, 6};
    int val = 3;
    cout << removeElement(nums, val);

    return 0;
}