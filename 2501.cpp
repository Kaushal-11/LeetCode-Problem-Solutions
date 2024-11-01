#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for(int x : nums){
            int cnt = 0;
            int curr = x;

            while(s.find(curr) != s.end()){
                cnt++;
                curr *= curr;
            }
            ans = max(ans, cnt);
        }

        return ans > 2 ? ans : -1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,3,6,16,8,2};
    cout<<s.longestSquareStreak(nums)<<endl;
    return 0;
}
