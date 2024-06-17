#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int x : nums) 
            mp[x]++;

        for(auto it : mp){
            if(it.second == 1)
                ans.push_back(it.first);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1};
    vector<int> ans = s.singleNumber(nums);
    for(int x : ans)
        cout<<x<<" ";
return 0;
}   