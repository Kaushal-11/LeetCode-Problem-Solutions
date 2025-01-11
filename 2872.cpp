#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dfs(int curr, int parent, vector<int> adj[], vector<int> &val, int k, int &cnt){
        int sum = 0;
        for (int x : adj[curr]){
            if(x != parent){
                sum += dfs(x, curr, adj, val, k, cnt);
                sum %= k;
            }
        }

        sum += val[curr];
        sum %= k;
        if(sum == 0)
            cnt++;
        
        return sum;
    }

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<int> adj[n];
        int cnt = 0;
        for (auto edge : edges) {
            int a = edge[0];
            int b = edge[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        dfs(0, -1, adj, values, k, cnt);
        return cnt;
    }
};

int main() {
    Solution s;
    vector<vector<int>> edges = {{0,2},{1,2},{1,3},{2,4}};
    vector<int> values = {1,8,1,4,4};
    int n = 5, k = 6;
    cout<<s.maxKDivisibleComponents(n, edges, values, k)<<endl;
    return 0;
}
