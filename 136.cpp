#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,3,4,1,2,3};
    cout<<s.singleNumber(v);
return 0;
}   