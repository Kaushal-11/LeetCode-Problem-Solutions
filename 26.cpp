#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for (int i = 1; i < n; i++)
        {
            if(nums[i] != nums[k]){
                k++;
                nums[k] = nums[i];
            }
        }
        
        return k+1;
    }
};

int main() {
    Solution s;
    vector<int> nums= {0,0,1,1,1,2,2,3,3,4};
    cout << s.removeDuplicates(nums) << endl;
return 0;
}   