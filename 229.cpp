#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int temp = size/3;
        unordered_map<int , int> m;
        for (auto x : nums)
        {
            m[x]++;
        }
        for(auto i : m){
            if(i.second > temp){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> num = {3,1,3};
    vector<int> ans;
    ans = s.majorityElement(num);
    for(auto x : ans){
        cout<<x<<" ";
    }
return 0;
}