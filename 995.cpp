#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0, freq = 0;
        vector<int> visited(n, 0);

        for (int i = 0; i < n; i++)
        {
            if(i >= k)
                freq -= visited[i-k];

            if(nums[i] == 1 && freq%2 == 1 || nums[i] == 0 && freq%2 == 0){
                if(i + k> n)
                    return -1;
                ans++;
                freq++;
                visited[i] = 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,0,0,1,0,1,1,0};
    int  k = 3;
    cout<<s.minKBitFlips(nums, k);
return 0;
}   