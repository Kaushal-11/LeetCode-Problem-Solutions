#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int cntn = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                cntn++;
            }
            else if(nums[i] == 0)
            {
                return 0;
            }
        }
        if (cntn % 2 == 0)
        {
            return 1;
        }
        else
            return -1;
    }
};

int main(){
    Solution s;
    vector<int> v = {2,3,4,5,5};
    cout<<s.arraySign(v);
}