#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        unordered_set<int> s;
        int maxi = INT_MIN;
        
        for (int x : nums) {
            int temp = max(maxi + 1, x - k);            
            if (temp <= x + k) {
                s.insert(temp);
                maxi = temp;
            }
        }
        
        return s.size();
    }
};


int main() {
    Solution s;
    vector<int> num = {7,8,10,10,7,6,7};
    int k = 1;
    cout<<s.maxDistinctElements(num, k)<<endl;
    return 0;
}
