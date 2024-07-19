#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cnt = 0;  
        int i = 0, j = 0;
        int oddCount = 0;
        int temp = 0;

        while (i < nums.size()) {        
            if (nums[i] % 2 != 0) {
                k--;
                temp = 0;
            }

            while (k == 0) {            
                if (nums[j] % 2 != 0) 
                    k++;
                            
                temp++;
                j++;
            }
        
            cnt += temp;
            i++;
        }

        return cnt;
    }
};


int main() {
    Solution s;
    vector<int> nums = {1,1,2,1,1};
    int k = 3;
    cout<<s.numberOfSubarrays(nums, k)<<endl;
return 0;
}   