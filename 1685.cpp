#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n);
        vector<int> result;
        sum[0] = nums[0];
        for(int i = 1; i < n ;i++){
            sum[i] = sum[i-1] + nums[i];
        }
        for(int i = 0 ; i < n;i++){
            int lsum = 0 , rsum = 0;
            if(i != 0)
                lsum = nums[i]*i-sum[i-1];
            if(i != n-1)
                rsum = sum[n-1]-sum[i]-(nums[i]*(n-i-1));
            result.push_back(rsum + lsum);
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,4,6,8,10};
    vector<int> result;
    result = s.getSumAbsoluteDifferences(nums);
    for(auto x : result){
        cout<<x<<" ";
    }
return 0;
}   