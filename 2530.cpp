#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int sum = 0;

        priority_queue<int> pq;
        for(int x : nums)
            pq.push(x);

        while(k--){
            int maxi = pq.top();
            sum += maxi;
            pq.pop();
            pq.push(ceil(maxi/3));
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<int> nums = {10,3,3,4};
    int k = 4;
    cout<<s.maxKelements(nums,k);
    return 0;
}
