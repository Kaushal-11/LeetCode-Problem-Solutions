#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int i = 0;
        while(i <= end) {
            if(nums[i] == 0)
                swap(nums[i++], nums[start++]);
            else if(nums[i] == 2)
                swap(nums[i], nums[end--]); 
            else
                i++;
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,2,1,1};
    s.sortColors(nums);
    for(int x : nums) 
        cout<<x<<" ";
return 0;
}   