#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxi = 0;
        int mini = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            int profit = prices[i] - mini;
            mini = min(mini, prices[i]);
            maxi = max(maxi, profit);
        }
        return maxi;
    }
};
int main()
{
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<s.maxProfit(prices)<<endl;
    return 0;
}