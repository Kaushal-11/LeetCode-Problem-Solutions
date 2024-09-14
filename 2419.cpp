#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = 0, cnt = 0;
        int len = 0;

        for(int x : nums) {
            if(x > maxi){
                maxi = x;
                len = cnt = 0;
            }

            if(x == maxi){
                cnt++;
            }
            else{
                cnt = 0;
            }

            len = max(len, cnt);
        }
        return len;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,3,2,2};
    cout<<s.longestSubarray(nums)<<endl;
    return 0;
}
