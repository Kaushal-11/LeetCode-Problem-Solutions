#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>> adj(n);
        for(auto e : edges){
            adj[e[0]-1].push_back(e[1]-1);
            adj[e[1]-1].push_back(e[0]-1);
        }

        vector<pair<int, int>> dist(n, {1e9, 1e9});
        priority_queue<pair<int,int>> pq;

        dist[0] = {0, 1e9};
        pq.push({0, 0});
        
        while(!pq.empty()){
            auto [currTime, node] = pq.top();
            pq.pop();
            
            currTime *= -1;
            if(currTime > dist[node].second)   continue;

            int newTime = currTime + time;
            int temp = currTime/change;
            if(temp%2 == 1)     // Condition of Red Signal
                newTime = (temp+1)*change + time;

            for(auto adjNode : adj[node]){
                if(dist[adjNode].first > newTime){
                    dist[adjNode].second = dist[adjNode].first;
                    dist[adjNode].first = newTime;

                    pq.push({-1*dist[adjNode].first, adjNode});
                }
                else if(dist[adjNode].first == newTime)
                    continue;
                else if(dist[adjNode].second > newTime){
                    dist[adjNode].second = newTime;
                    pq.push({-1*dist[adjNode].second, adjNode});
                }
            }
        }
        return dist[n-1].second;
    }
};

int main() {
    Solution s;
    vector<vector<int>> edges = {{1,2},{1,3},{1,4},{3,4},{4,5}};
    int n = 5, time = 3, change = 5;
    cout<<s.secondMinimum(n, edges, time, change)<<endl;
return 0;
}   