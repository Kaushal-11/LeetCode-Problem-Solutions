#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int i = 0;
        for(auto it : mp) {
            if(it.second == 1)
                nums[i++] = it.first;
            else if(it.second >= 2){
                nums[i++] = it.first;
                nums[i++] = it.first;
            }
        }
        return i;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};
    cout << s.removeDuplicates(nums);
return 0;
}   