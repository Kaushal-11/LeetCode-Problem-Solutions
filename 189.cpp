#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.end()-k,nums.end());
        ans.insert(ans.end(),nums.begin(),nums.end()-k);
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    vector<int> ans = s.rotate(nums, k);
    for(int x : ans){
        cout<<x<<" ";
    }
return 0;
}   