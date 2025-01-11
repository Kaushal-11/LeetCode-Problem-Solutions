#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int count = 0;
        unordered_set<int> s(banned.begin(), banned.end());

        for (int i = 1; i <= n; i++)
        {
            if(s.find(i) == s.end() && maxSum >= i){
                count++;
                maxSum -= i;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> banned = {1,2,4};
    int n = 6, maxSum = 5;
    cout<<s.maxCount(banned, n, maxSum)<<endl;
    return 0;
}
