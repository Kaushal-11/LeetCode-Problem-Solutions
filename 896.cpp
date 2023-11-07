#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int cnt1 = 0 , cnt2 = 0;
       for (int i = 0; i < nums.size()-1; i++)
       {
        if(nums[i] <= nums[i+1] ) cnt1++;
        if(nums[i] >= nums[i+1] ) cnt2++;
       }
        if(cnt1 == nums.size()-1 || cnt2 == nums.size()-1){
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main() {
    vector<int> nums = {5,9,1,6};
    Solution s;
    cout<<s.isMonotonic(nums);
return 0;
}