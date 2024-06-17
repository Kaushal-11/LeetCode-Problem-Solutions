#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> ans;
        int peakCnt = 0;

        for (auto& query : queries) {
            if (query[0] == 1) {
                int l = query[1];
                int r = query[2];
                int cnt = 0;
                for (int i = l + 1; i < r; ++i) {
                    if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) 
                        cnt++;
                }
                ans.push_back(cnt);
            }
            else if (query[0] == 2) {
                int index = query[1];
                int val = query[2];
                nums[index] = val;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {6,10,8};
    vector<vector<int>> queries = {{1,0,2},{2,2,8},{2,1,4},{2,0,1}};
    vector<int> ans = s.countOfPeaks(nums, queries);
    for(int x : ans)
        cout<<x<<" ";

return 0;
}   