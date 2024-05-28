#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double, int>> worker;
        for (int i = 0; i < quality.size(); i++)
        {
            worker.push_back({(wage[i]*1.0)/quality[i], quality[i]});
        }

        sort(worker.begin(), worker.end());
        double ans = DBL_MAX;
        double quality_sum = 0;     
        priority_queue<int> pq;
        for (auto it : worker)
        {
            double ratio = it.first;
            quality_sum += it.second;
            pq.push(it.second);
            if(pq.size() > k){
                quality_sum -= pq.top();
                pq.pop();
            }
            if(pq.size() == k){
                ans = min(ans, quality_sum*ratio);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> qualitty = {10,20,5}, wage = {70,50,30};
    int k = 2;
    cout<<s.mincostToHireWorkers(qualitty, wage, k)<<endl;
return 0;
}   