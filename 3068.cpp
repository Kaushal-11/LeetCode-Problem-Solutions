#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int sum = 0, cnt = 0, mini = INT_MAX;
        for(int x : nums){
            if(x^k > x){
                sum += x^k;
                mini = min(mini, x^k - x);
                cnt++;
            }
            else{
                sum += x;
                mini = min(mini, x - x^k);
            }
        }

        if(cnt%2 == 0)
            return sum;

        return sum - mini;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,1};
    vector<vector<int>> edges = {{0,1},{0,2}};
    int k = 3;
    cout<<s.maximumValueSum(nums, k, edges);
return 0;
}   