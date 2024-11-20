#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0;
        unordered_map<int, int> mp;
        long long ans = 0, windowSum = 0;
        for (int i = 0; i < k; i++){
            windowSum += nums[i];
            mp[nums[i]]++;
        }
        
        int i = 0, j = k-1;
        while(j < n){
            if(mp.size() == k)
                ans = max(ans, windowSum);
            mp[nums[i]]--;
            if(mp[nums[i]] == 0)
                mp.erase(nums[i]);
            windowSum -= nums[i];
            i++;
            j++;
            if(j < n){
                windowSum += nums[j];
                mp[nums[j]]++;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,5,9,9,2,3,9};
    int k = 3;
    cout<<s.maximumSubarraySum(nums, k)<<endl;
    return 0;
}
