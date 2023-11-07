#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int size = nums.size();
        int mini = nums[0];
        for (int j = 1; j < size-1; j++)
        {
            if(mini < nums[j]){
                int k = j + 1;
                while(k < size && mini >= nums[k]) k++;

                if(k != size && nums[k]<nums[j]) return true;
            }
            mini = min(mini , nums[j]);
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<int> num = {1,4,2,0};
    cout<<s.find132pattern(num);
return 0;
}