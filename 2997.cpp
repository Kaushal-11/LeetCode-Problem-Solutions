#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x = 0;
        for (int i = 0; i < nums.size(); i++)
            x = x ^ nums[i];

        int res = x ^ k;
        int cnt = 0;
        while(res){
            cnt += res & 1;
            res >>= 1;
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,1,3,4};
    int k = 1;
    cout<<s.minOperations(nums,k)<<endl;
return 0;
}   