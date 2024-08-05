#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        int range = maxi-mini+1;

        vector<int> count(range, 0);
        for (int i = 0; i < n; i++)
           count[nums[i] - mini]++; 
        
        for (int i = 1; i < range; i++)
            count[i] += count[i-1];
        
        vector<int> sorted(n);
        for (int i = n-1; i >= 0 ; i--){
            sorted[count[nums[i] - mini]-1] = nums[i];
            count[nums[i] - mini]--;    
        }
        
        return sorted;
    }
};

int main() {
    Solution s;
    vector<int> nums = {5,1,1,2,0,0};
    vector<int> ans = s.sortArray(nums);
    for(int x : ans)
        cout<<x<<" ";
return 0;
}   