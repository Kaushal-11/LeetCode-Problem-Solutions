#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, int> mp;
        int ans = -1;
        for(int x : nums){
            mp[x]++;
            if(mp.find(x*-1) != mp.end())
                ans = max(ans, abs(x));
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-1,2,-3,3};
    cout<<s.findMaxK(nums);
return 0;
}   