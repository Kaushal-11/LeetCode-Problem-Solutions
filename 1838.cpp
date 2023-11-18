#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 1;
        int l = n - 2 , r = n - 1;
        int cnt = 1, temp = k;
        while(l >= 0){
            while(temp >= 0 && l >= 0){
                if(nums[r] - nums[l] <= temp){
                    cnt++;
                    temp -= (nums[r] - nums[l]);
                    l--;
                }
                else{
                    break;
                }
            }
            ans = max(ans, cnt);
            if(r > 0){
                temp += (nums[r] - nums[r-1]) * (r-l-1);
                r--;
                cnt--;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,4,8,13};
    cout<<s.maxFrequency(v,5);
return 0;
}   