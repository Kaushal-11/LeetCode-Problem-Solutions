#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<int> marked(n, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++){
            pq.push({nums[i], i});
        }
        long long ans = 0;
        while(!pq.empty()) {
            auto [small, index] = pq.top();
            pq.pop();
            if(marked[index])
                continue;
            
            ans += small;
            marked[index] = 1;

            if(index > 0)
                marked[index-1] = 1;
            if(index < n-1)
                marked[index + 1] = 1;
        }

        return ans;            
    }
};

int main() {
    
    return 0;
}
