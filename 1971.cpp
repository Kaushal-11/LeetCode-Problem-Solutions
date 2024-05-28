#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(vector<vector<int>>& graph, int source, int destination, vector<int> &visited){
        if(source == destination)
            return true;

        visited[source] = true;
        for(auto& x : graph[source]){
            if(!visited[x]){
                if(dfs(graph, x, destination, visited))
                    return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for(auto& edge : edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<int> visited(n, 0);
        return dfs(graph, source, destination, visited);
    }
};

int main() {
    Solution s;
    vector<vector<int>> edges = {{0,1},{1,2},{2,0}};
    int n = 3;
    int source = 0, destination = 2;
    cout<<s.validPath(n, edges, source, destination);
return 0;
}   