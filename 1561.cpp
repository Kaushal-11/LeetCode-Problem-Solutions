#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0;
        sort(piles.begin(),piles.end());
        int section = piles.size()/3;
        int i = piles.size() - 2;
        int cnt = 0;
        while(cnt != section){
            ans += piles[i];
            i = i - 2;
            cnt++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> piles = {2,4,1,2,7,8};
    cout<<s.maxCoins(piles);
return 0;
}   