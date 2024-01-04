#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] > maxi)
                maxi = mp[nums[i]];
        }
        vector<vector<int>> matrix(maxi);
        for (auto it = mp.begin(); it != mp.end();it++) {
            for (int i = 0; i < it->second; i++)
            {
                matrix[i].push_back(it->first);
            }
        }
        return matrix;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,3,4,1,2,3,1};
    vector<vector<int>> matrix = s.findMatrix(arr);
    for(auto x : matrix){
        for(auto val : x){
            cout<<val<<" ";
        }
        cout<<endl;
    }
return 0;
}   