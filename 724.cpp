#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int leftSum = 0;
        int rightSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            leftSum = accumulate(nums.begin(), nums.begin() + i, 0);
            rightSum = accumulate(nums.begin() + i +1, nums.end(), 0);

            if(leftSum == rightSum)
                return i;
        }
    return -1;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 7, 3, 6, 5, 6};
    cout << s.pivotIndex(v);
    return 0;
}