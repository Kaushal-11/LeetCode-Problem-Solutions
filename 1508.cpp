#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v;
        int sum = 0;    
        for (int i = 0; i < n; i++){
            int temp_sum = 0;
            for (int j = i; j < n; j++){
                temp_sum += nums[j];
                v.push_back(temp_sum);
            }
        }
        sort(v.begin(), v.end());
        for (int i = left-1; i < right; i++)
            sum += v[i];
        
        int mod = 1e9 + 7;
        return sum % mod;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,4};
    int n = 4, left = 1, right = 5;
    cout<<s.rangeSum(nums, n, left, right)<<endl;
return 0;
}   