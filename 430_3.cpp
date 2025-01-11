#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberofSubsequences(std::vector<int>& nums) {
        std::unordered_map<int, int> counts;
        int result = 0;

        // Iterate through the array in reverse to maintain the order
        for (int i = nums.size() - 1; i >= 2; --i) {
            if (counts[nums[i]] > 0) {
                ++result; // Valid subsequence found
            }
            counts[nums[i]] += 1;
        }

        std::unordered_map<int, int> first_counts;

        for (int i = nums.size() - 2; i >= 0; --i) {
            if (first_counts.count(nums[i + 1])) {
                for (int j = 0; j < counts[nums[i]]; ++j) {
                    result += first_counts[nums[i + 1]];
                }
            }
            first_counts[nums[i]] += counts[nums[i + 1]];
        }

        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,4,3,4,3,4,3,4};
    cout<<s.numberofSubsequences(nums)<<endl;
    return 0;
}
