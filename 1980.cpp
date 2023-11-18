#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i][i] == '1'){
                ans += '0';
            }
            else{
                ans += '1';
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> nums = {"00","11"};
    cout<<s.findDifferentBinaryString(nums);
return 0;
}   