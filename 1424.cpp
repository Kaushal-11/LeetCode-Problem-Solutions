#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int,vector<int>> mp;
        for(int i = 0; i < nums.size();i++){
            for(int j = 0; j < nums[i].size() ; j++){
                mp[i+j].push_back(nums[i][j]);
            }
        }
        for(auto &it : mp){
            reverse(it.second.begin(),it.second.end());
        }
        vector<int> ans;
        for(auto it1 : mp){
            for(auto it2 : it1.second){
                ans.push_back(it2);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> nums = {{1,2,3,4,5},{6,7},{8},{9,10,11},{12,13,14,15,16}};
    vector<int> ans;
    ans = s.findDiagonalOrder(nums);
    for(auto x : ans){
        cout<<x<<" ";
    }
return 0;
}   