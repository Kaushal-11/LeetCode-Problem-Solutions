#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, freq = 0;

        for (int i = 0; i < n; i++)
            if(nums[i] == 1 && freq%2 == 1 || nums[i] == 0 && freq%2 == 0)
                freq++;
        
        return freq;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,1,1,0,1};
    cout<<s.minOperations(nums);
return 0;
}   