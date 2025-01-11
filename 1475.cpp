#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(prices.begin(), prices.end());
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if(prices[i] >= prices[j]){
                    ans[i] = prices[i] - prices[j];
                    break;    
                }
            }            
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> prices = {8,4,6,2,3};
    vector<int> ans = s.finalPrices(prices);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}