#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x : nums)
            mp[x]++;
        
        sort(nums.begin(), nums.end(), [&](int a, int b){
            if(mp[a] != mp[b])
                return mp[a] < mp[b];
            else
                return a > b;
        });

        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,3,1,3,2};
    vector<int> ans = s.frequencySort(nums);
    for(int x : ans)
        cout<<x<<" ";
return 0;
}   