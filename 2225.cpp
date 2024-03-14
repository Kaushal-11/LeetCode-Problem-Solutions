#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, pair<int, int>> mp;
        vector<int> ans1 , ans2;
        for (int i = 0; i < matches.size(); i++)
        {
            mp[matches[i][0]].first++;
            mp[matches[i][1]].second++;
        }
        
        for(auto it : mp){
            if(it.second.second == 0){
                ans1.push_back(it.first);
            }

            if(it.second.second == 1){
                ans2.push_back(it.first);
            }
        }

        return {ans1, ans2};
    }
};

int main() {
    Solution s;
    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    vector<vector<int>> ans = s.findWinners(matches);
    for(auto it : ans){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}   