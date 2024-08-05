#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int cnt_ones = count(nums.begin(), nums.end(), 1);

        vector<int> v(nums.begin(), nums.end());
        v.insert(v.end(), nums.begin(), nums.end());

        int curr_zero = count(v.begin(), v.begin()+cnt_ones, 0);
        int mini_zero = curr_zero;

        for (int i = cnt_ones; i < v.size(); i++)
        {
            if(v[i] == 0)
                curr_zero++;
            if(v[i - cnt_ones] == 0)
                curr_zero--;
            mini_zero = min(mini_zero, curr_zero);
        }
        return mini_zero;
    }   
};

int main() {
    Solution s;
    vector<int> nums = {1, 0, 1, 0, 1, 0, 0, 1};
    cout << s.minSwaps(nums) << endl; 
return 0;
}   