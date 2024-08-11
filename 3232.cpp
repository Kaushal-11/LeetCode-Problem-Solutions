#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum_single = 0, sum_double = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < 10)
                sum_single += nums[i];
            else
                sum_double += nums[i];
        }
        if(sum_single == sum_double)
            return false;
        else
            return true;
    }
};

int main() {
    Solution s;
    vector<int> nums = {5,5,5,25};
    cout<<s.canAliceWin(nums)<<endl;
return 0;
}   