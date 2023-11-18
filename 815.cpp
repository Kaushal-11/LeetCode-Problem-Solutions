#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        unordered_map<int , vector<int>> adj;
        if(source == target){
            return 0;
        }
        for(int i = 0 ; i < routes.size() ;i++){
            for(auto x : routes[i]){
                adj[x].push_back(i);
            }
        }

        queue<int> q;
        vector<bool> visit(100, false);

        for(auto x : adj[source]){
            q.push(x);
            visit[x] = true;            
        }

        int cnt = 1;
        while(!q.empty()){
            int size = q.size();

            while(size--){
                int temp = q.front();
                q.pop();

                for (auto stop : routes[temp])
                {
                    if(stop == target){
                        return cnt;
                    }

                    for(auto x : adj[stop]){
                        if(!visit[x]){
                            visit[x] = true;
                            q.push(x);
                        }
                    }
                } 
            }
            cnt++;
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<vector<int>> route = {{1,2,7},{3,6,7}};
    int source = 1 , target = 6;
    cout<<s.numBusesToDestination(route,source,target);
return 0;
}   