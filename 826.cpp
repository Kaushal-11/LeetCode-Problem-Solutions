#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> p;
        for (int i = 0; i < difficulty.size(); i++){
            p.push_back({difficulty[i], profit[i]});
        }
        sort(p.begin(), p.end());
        sort(worker.begin(), worker.end());

        int i = 0, maxi = 0, sum = 0;
        for(int x : worker){
            while(i < p.size() && p[i].first <= x ){
                maxi = max(maxi, p[i].second);  
                i++;
            }
            sum += maxi;
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<int> difficulty = {2,4,6,8,10}, profit = {10,20,30,40,50}, worker = {4,5,6,7};
    cout<<s.maxProfitAssignment(difficulty, profit, worker);
return 0;
}   