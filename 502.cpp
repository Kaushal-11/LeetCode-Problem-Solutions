#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> p;
        for (int i = 0; i < profits.size(); i++)
            p.push_back({profits[i], capital[i]});
        
        sort(p.begin(), p.end(),  [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });
        
        priority_queue<int> pq;
        int i = 0;
        while(k){
            while(i < p.size() && p[i].second <= w)
                pq.push(p[i++].first);

            if(!pq.empty()){
                w += pq.top();
                pq.pop();
            }
            k--;
        }

        return w;
    }
};

int main() {
    Solution s;
    vector<int> pro = {1,2,3}, cap = {0,1,1};
    int k = 2, w = 0;
    cout<<s.findMaximizedCapital(k, w, pro, cap)<<endl;
return 0;
}   