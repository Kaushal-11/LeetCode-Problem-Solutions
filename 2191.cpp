#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++)
        {
            string s = to_string(nums[i]);
            for (int j = 0; j < s.length(); j++)
            {
                s[j] = '0' + mapping[s[j] - '0'];
            }
            int temp = stoi(s);
            v.push_back({temp, i});
        }
        sort(v.begin(), v.end());

        vector<int> ans;
        for(auto it : v){
            ans.push_back(nums[it.second]);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> mapping = {8,9,4,0,2,1,3,5,7,6}, nums = {991,338,38};
    vector<int> ans = s.sortJumbled(mapping, nums);
    for(int x : ans)
        cout<<x<<" ";
return 0;
}   