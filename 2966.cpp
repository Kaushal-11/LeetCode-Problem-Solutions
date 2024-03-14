#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i+=3)
        {
            ans.push_back({nums[i], nums[i+1] , nums[i+2]});
            if(nums[i+2] - nums[i] > k)
                return vector<vector<int>>{};
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,3,4,8,7,9,3,5,1};
    int k = 2;
    vector<vector<int>> ans = s.divideArray(v,k);
    for(auto x : ans){
        for(int i : x){
            cout<<i<<" ";
        }
        cout<<endl;
    }
return 0;
}   