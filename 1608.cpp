#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if(nums[i] >= cnt){
                cnt++;
                if(cnt > nums[i]) 
                    return -1;
            }
            else{
                return cnt;
            }
        }
        return n;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,5};
    cout<<s.specialArray(nums)<<endl;
return 0;
}   