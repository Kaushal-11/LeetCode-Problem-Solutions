#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis(n, 1), lds(n, 1);
        int mini = INT_MAX;

        for (int i = 0; i < n; i++){
            for (int j = i-1; j >= 0; j--){
                if(nums[i] > nums[j]){
                    lis[i] = max(lis[i], lis[j]+1);
                }
            }            
        }

        for (int i = n-1; i >= 0; i--){
            for (int j = i+1; j < n; j++){
                if(nums[i] > nums[j]){
                    lds[i] = max(lds[i], lds[j]+1);
                }
            }            
        }

        for (int i = 0; i < n; i++){
            if(lis[i] > 1 && lds[i] > 1)
                mini = min(mini, n-lis[i]-lds[i]+1);
        }
        
        return mini;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,1,1,5,6,2,3,1};
    cout<<s.minimumMountainRemovals(nums);
    return 0;
}
