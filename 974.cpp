#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int sum = 0;
        vector<int> v(k);
        v[0] = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = (sum + nums[i] % k + k) % k;
            ans += v[sum];
            v[sum]++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    cout<<s.subarraysDivByK(nums,k)<<endl;
return 0;
}   