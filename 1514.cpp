#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<double> dist(n, 0.0);
        dist[start_node] = 1.0;
        
        for (int i = 0; i < n - 1; i++) {
            bool flag = false;
            for (int j = 0; j < edges.size(); j++) {
                int u = edges[j][0];
                int v = edges[j][1];
                double prob = succProb[j];
                
                if (dist[u] * prob > dist[v]) {
                    dist[v] = dist[u] * prob;
                    flag = true;
                }
                
                if (dist[v] * prob > dist[u]) {
                    dist[u] = dist[v] * prob;
                    flag = true;
                }
            }
            if (!flag) 
                break;
        }
        
        return dist[end_node];
    }
};

int main() {
    Solution s;
    vector<vector<int>> edges = {{0,1},{1,2},{0,2}};
    vector<double> succProb = {0.5,0.5,0.2};
    int n = 3, start = 0, end = 2;
    cout<<s.maxProbability(n,edges,succProb,start,end);
    return 0;
}
