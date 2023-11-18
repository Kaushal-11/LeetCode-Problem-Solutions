#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

void dfs(vector<int> &ans, map<int, vector<int>> &adj, int root, int prev){
    ans.push_back(prev);
    for(auto i : adj[prev]){
        if(i != root){
            dfs(ans,adj,prev,i);
        }
    }
}
vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size();
        vector<int> ans;
        map<int, vector<int>> adj;
        for(int i = 0 ; i <n; i++){
            adj[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            adj[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        int prev;
        for(auto i : adj){
            if(i.second.size() == 1){
                prev = i.first;
                break;
            }
        }
        int root = 1e6;
        dfs(ans, adj, root, prev);
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> pair = {{2, 1}, {3, 4}, {3, 2}};
    vector<int> ans;
    ans = s.restoreArray(pair);
    for(int x : ans){
        cout<<x<<" ";
    }
return 0;
}   