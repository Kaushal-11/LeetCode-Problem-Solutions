#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int week = n/7;
        int rem = n%7;
        int val = 28;
        int cnt = 1;
        for (int i = 0; i < week; i++){
            ans += val;
            val += 7;
            cnt++;
        }
        for (int i = 0; i < rem; i++){
            ans += cnt;
            cnt++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    cout<<s.totalMoney(20);
return 0;
}   