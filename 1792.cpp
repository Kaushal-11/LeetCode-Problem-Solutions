#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size();
        double avg = 0, ans = 0;
        priority_queue<pair<double, int>> pq;

        for (int i = 0; i < n; i++){
            double diff = (double)(classes[i][0]+1)/(double)(classes[i][1]+1) - (double)(classes[i][0])/(double)(classes[i][1]);
            pq.push({diff, i});
        }

        while(extraStudents--){
            int i = pq.top().second;
            pq.pop();
            classes[i][0] += 1;
            classes[i][1] += 1;
            double diff = (double)(classes[i][0]+1)/(double)(classes[i][1]+1) - (double)(classes[i][0])/(double)(classes[i][1]);
            pq.push({diff, i});
        }
        
        for (int i = 0; i < n; i++)
        {
            avg = (double)classes[i][0] / (double)(classes[i][1]);
            ans += avg;
        }
        return ans/n;
    }
};

int main() {
    Solution s;
    vector<vector<int>> classes = {{1,2},{3,5},{2,2}};
    int es = 3;
    cout<<s.maxAverageRatio(classes, es);
    return 0;
}
