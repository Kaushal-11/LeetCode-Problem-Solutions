#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double sum1 = 0, sum2 = 0;

        sum1 = customers[0][0] + customers[0][1];
        sum2 = sum1 - customers[0][0];

        for (int i = 1; i < n; i++)
        {
            if(sum1 < customers[i][0])
                sum1 = customers[i][0];
                
            sum1 += customers[i][1];
            sum2 += sum1 - customers[i][0];
        }
        return sum2 / n;
    }
};

int main() {
    Solution s;
    vector<vector<int>> customers = {{1,2},{2,5},{4,3}};    
    cout<<s.averageWaitingTime(customers);
return 0;
}   