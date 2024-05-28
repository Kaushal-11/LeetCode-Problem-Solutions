#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int i = 1; i < pow(2,n); i++)
        {
            int temp = 0;
            int mask = i;
            for (int j = 0; j < n; j++)
            {
                if(mask%2 == 1)
                    temp = temp^nums[j];

                mask = mask/2;
            }
            ans += temp;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,3};
    cout<<s.subsetXORSum(nums);
return 0;
}   