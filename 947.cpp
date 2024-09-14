#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& stones, int index, vector<bool>& visited){
        visited[index] = true;

        for (int i = 0; i < stones.size(); i++)
        {
            if(visited[i] == false && (stones[i][0] == stones[index][0] || stones[i][1] == stones[index][1]))
                dfs(stones, i, visited);
        }        
    }

    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool> visited(n, false);
        int grp = 0;
        for (int i = 0; i < n; i++)
        {
            if(visited[i] == true)
                continue;
            
            dfs(stones, i, visited);
            grp++;
        }
        return n - grp;
    }
};

int main() {
    Solution s;
    vector<vector<int>> stones = {{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}};
    cout<<s.removeStones(stones);
    return 0;
}
