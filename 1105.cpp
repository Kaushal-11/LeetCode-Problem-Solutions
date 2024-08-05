#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            int total_width = 0, total_height = 0;
            for (int j = i; j > 0; j--)
            {
                total_width += books[j-1][0];
                if(total_width > shelfWidth)
                    break;
                total_height = max(total_height, books[j-1][1]);
                dp[i] = min(dp[i], dp[i-1]+total_height);
            }            
        }
        
        return dp[n];
    }
};

int main() {
    Solution s;
    vector<vector<int>> books = {{1,1},{2,3},{2,3},{1,1},{1,1},{1,1},{1,2}};
    int shelfWidth = 4;
    cout<<s.minHeightShelves(books, shelfWidth);
return 0;
}   