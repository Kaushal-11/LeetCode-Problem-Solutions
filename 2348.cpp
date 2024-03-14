#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0 , cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
                cnt++;
            else{
                ans += (cnt*(cnt+1))/2;
                cnt = 0;
            }
        }
        if(cnt)
            ans += (cnt*(cnt+1))/2;
        
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,3,0,0,2,0,0,4};
    cout<<s.zeroFilledSubarray(v)<<endl;
return 0;
}   