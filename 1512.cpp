#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
int main() {
    Solution s;
    vector<int> num = {1,2,3};
    cout<<s.numIdenticalPairs(num);
return 0;
}