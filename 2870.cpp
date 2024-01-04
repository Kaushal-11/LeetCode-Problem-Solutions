#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto x : mp){
            if(x.second == 1)
                return -1;
            ans += (x.second/3) + (x.second%3 > 0);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {2,3,3,2,2,4,2,3,4};
    cout<<s.minOperations(v);
return 0;
}   