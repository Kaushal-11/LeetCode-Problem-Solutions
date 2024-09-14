#include<bits/stdc++.h>
using namespace std;

class Solution {
    const int INF = 2e9;

    int dijkstra(int n, int src, int dest, vector<vector<pair<int, int>>>& adj) {
        vector<int> dist(n, INF);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        dist[src] = 0;
        pq.emplace(0, src);

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d > dist[u])
                continue;

            for (auto& [v, w] : adj[u]) {
                if (d + w < dist[v]) {
                    dist[v] = d + w;
                    pq.emplace(dist[v], v);
                }
            }
        }

        return dist[dest];
    }

public:
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges, int src, int dest, int target) {
        vector<vector<pair<int, int>>> adj(n);

        for (auto& it : edges) {
            if (it[2] != -1) {
                adj[it[0]].emplace_back(it[1], it[2]);
                adj[it[1]].emplace_back(it[0], it[2]);
            }
        }

        int initialShortestPath = dijkstra(n, src, dest, adj);
        if (initialShortestPath < target)
            return {};

        bool flag = (initialShortestPath == target);

        for (auto& it : edges) {
            if (it[2] != -1)
                continue;

            it[2] = flag ? INF : 1;
            adj[it[0]].emplace_back(it[1], it[2]);
            adj[it[1]].emplace_back(it[0], it[2]);

            if (!flag) {
                int newDist = dijkstra(n, src, dest, adj);
                if (newDist <= target) {
                    flag = true;
                    it[2] += target - newDist;
                }
            }
        }

        return flag ? edges : vector<vector<int>>();
    }
};

int main() {
    
    return 0;
}