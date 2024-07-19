#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        multiset<int> ms;
        int i = 0 , j = 0, maxi = 0;

        while(j < n){
            ms.insert(nums[j]);
                
            while(i <= j && (*ms.rbegin() - *ms.begin() > limit)){
                ms.erase(ms.find(nums[i]));
                i++;
            }

            maxi = max(maxi, j-i+1);
            j++;
        }
        return maxi;
    }
};

int main() {
    Solution s;
    vector<int> nums = {10,1,2,4,7,2};
    int limit = 5;
    cout<<s.longestSubarray(nums, limit)<<endl;
return 0;
}   