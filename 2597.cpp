#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool isBeautiful(vector<int> temp, int k){
        if(temp.size() == 1)
            return true;
        else if(temp.size() == 0)
            return false;
        for (int i = 0; i < temp.size(); i++){
            for (int j = i+1; j < temp.size(); j++){
                if(abs(temp[i] - temp[j]) == k)
                    return false;
            }
        }
        return true;
    }
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int cnt = 0;
        vector<int> temp;
        int n = nums.size();
        for (int i = 0; i < (1<<n); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i & (1 << j))
                    temp.push_back(nums[j]);
            }
            if(isBeautiful(temp, k))
                cnt++;
            temp.clear();
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,4,6};
    int k = 2;
    cout<<s.beautifulSubsets(nums, k);
return 0;
}   