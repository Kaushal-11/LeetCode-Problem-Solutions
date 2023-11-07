#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int i = 0 , j = 1 ,ans = 1, temp = 1;
        while(j < n){
            if(nums[i]+n-1 < nums[j]){
                i++;
                if(nums[i-1] != nums[i]){
                    temp -= 1;
                }
            }
            else{
                if( j == 0 || nums[j]!=nums[j-1]){
                    temp++;
                }
                j++;
            }
            ans = max(ans, temp);
        }
        return n - ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,10,100,1000};
    cout<<s.minOperations(nums);
return 0;
}