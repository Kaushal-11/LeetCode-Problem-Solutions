#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minChanges(vector<int>& nums, int k) {
        map<int, vector<int>> mp;
        vector<int> v;
 
        for (int i = 0; i < nums.size() / 2; ++i) {
            int left = nums[i];
            int right = nums[nums.size() - i - 1];
            int diff = abs(left - right);

            int X = max({left, right, k - left, k - right});

            mp[diff].push_back(X);
            v.push_back(X);
        }

        int ans = nums.size();  
        sort(v.begin(), v.end());

        for (const auto& [diff, values] : mp) {
            int cnt = lower_bound(v.begin(), v.end(), diff) - v.begin();
            cnt = cnt * 2 + (nums.size() / 2 - cnt);

            for (const auto& X : values) {
                if (X < diff) {
                    cnt -= 2;
                } else {
                    cnt -= 1;
                }
            }

            ans = min(ans, cnt);
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 0, 1, 2, 4, 3};
    cout << s.minChanges(nums, 4);
    return 0;
}
