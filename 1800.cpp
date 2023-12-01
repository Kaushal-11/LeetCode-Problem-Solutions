#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];
        int maxi = nums[0];
        for(int i = 1;i < nums.size(); i++){
            if(nums[i-1] < nums[i]){
                sum += nums[i];
                maxi = max(maxi, sum);
            }
            else{
                sum = nums[i];
            }
        }
        return maxi;
    }
};

int main() {
    Solution s;
    vector<int> nums = {10,20,30,5,10,50};
    cout<<s.maxAscendingSum(nums);
return 0;
}