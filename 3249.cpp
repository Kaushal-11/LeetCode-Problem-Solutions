#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<vector<int>> tree;
    vector<int> subtreeSize;

    void dfs(int node, int parent) {
        subtreeSize[node] = 1;
        for (int child : tree[node]) {
            if (child != parent) {
                dfs(child, node);
                subtreeSize[node] += subtreeSize[child];
            }
        }
    }

    int countGood(int node, int parent) {
        int size = -1;
        bool isGood = true;
        for (int child : tree[node]) {
            if (child != parent) {
                if (size == -1) {
                    size = subtreeSize[child];
                } else if (size != subtreeSize[child]) {
                    isGood = false;
                }
            }
        }
        int count = isGood ? 1 : 0;
        for (int child : tree[node]) {
            if (child != parent) {
                count += countGood(child, node);
            }
        }
        return count;
    }

public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        tree.resize(n);
        subtreeSize.resize(n);

        for (const auto& edge : edges) {
            int u = edge[0], v = edge[1];
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        dfs(0, -1);

        return countGood(0, -1);
    }
};
int main() {
    Solution s;
    vector<vector<int>> edges = {{0,1},{1,2},{1,3},{1,4},{0,5},{5,6},{6,7},{7,8},{0,9},{9,10},{9,12},{10,11}};
    cout<<s.countGoodNodes(edges)<<endl;
    return 0;
}
