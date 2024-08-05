#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<vector<int>> buildGraph(int k, vector<vector<int>>& condition){
        vector<vector<int>> graph(k+1);

        for(auto& it : condition){
            graph[it[0]].push_back(it[1]);
        }

        return graph;
    }

    vector<int> topologicalSort(int k, vector<vector<int>>& graph){
        vector<int> inDeg(k+1, 0);
        for (int i = 1; i <= k; i++){
            for(auto& it : graph[i]){
                inDeg[it]++;
            }
        }

        queue<int> q;
        vector<int> visited(k+1, 0);
        for(int i = 1; i <= k; i++){
            if(inDeg[i] == 0)
                q.push(i);
        }

        vector<int> topoOrder;
        while(!q.empty()){
            int len = q.size();
            while(len--){
                int node = q.front();
                q.pop();

                visited[node] = 1;
                topoOrder.push_back(node);

                for(auto child : graph[node]){
                    if(!visited[child]){
                        inDeg[child]--;
                        if(inDeg[child] == 0)
                            q.push(child);
                    }
                }
            }
        }

        vector<int> circularTopo;
        for (int i = 1; i <= k; i++)
        {
            if(inDeg[i] != 0){
                return circularTopo;
            }
        }
        
        return topoOrder;
    }

    void fillEmpty(int k, vector<int> &topo){
        unordered_map<int, bool> vis;
        for(auto node : topo)
            vis[node] = true;
        
        for (int i = 1; i <= k; i++){
            if(!vis[i])
                topo.push_back(i);
        }        
    }

public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<vector<int>> rowGraph = buildGraph(k, rowConditions);
        vector<vector<int>> colGraph = buildGraph(k, colConditions);

        vector<int> rowTopo = topologicalSort(k, rowGraph);
        vector<int> colTopo = topologicalSort(k, colGraph);

        vector<vector<int>> matrix(k, vector<int>(k, 0));
        if(rowTopo.size() == 0 || colTopo.size() == 0)
            return {};

        fillEmpty(k, rowTopo);
        fillEmpty(k, colTopo);

        unordered_map<int, int> mp;
        for (int i = 0; i < k; i++){
            mp[colTopo[i]] = i;
        }

        for (int i = 0; i < k; i++){
            matrix[i][mp[rowTopo[i]]] = rowTopo[i];
        }
        
        return matrix;
    }
};

int main() {
    Solution s;
    vector<vector<int>> rowCon = {{1,2},{3,2}}, colCon = {{2,1},{3,2}};
    int k = 3;
    vector<vector<int>> matrix = s.buildMatrix(k, rowCon, colCon);
    for(auto it : matrix){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;
}   