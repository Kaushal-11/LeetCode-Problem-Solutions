#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int pos = 0;
        int neg = 1;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] > 0){
                ans[pos] = nums[i];
                pos += 2;
            }
            else{
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> arr = {3,1,-2,-5,2,-4};
    vector<int> ans = s.rearrangeArray(arr);
    for(int x : ans){
        cout<<x<<" ";
    }
return 0;
}   