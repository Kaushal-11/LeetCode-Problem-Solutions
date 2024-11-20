#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        long long sum = 0;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> prefixSumHeap;

        for (int i = 0; i < n; i++){
            sum += nums[i];
            if(sum >= k)
                ans = min(ans, i+1);

            while(!prefixSumHeap.empty() && sum - prefixSumHeap.top().first >= k){
                ans = min(ans, i - prefixSumHeap.top().second);
                prefixSumHeap.pop();
            }
            prefixSumHeap.emplace(sum, i);
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,-1,2};
    int k = 3;
    cout<<s.shortestSubarray(nums,k)<<endl;
    return 0;
}
