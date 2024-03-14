#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long solve(int a, int b) {
        if (b == 0) return 1;
        long long result = a % 1337;
        for (int i = 1; i < b; i++) {
            result = (result * a) % 1337;
        }
        return result;
    }
    int superPow(int a, vector<int>& b) {
        int s = 1;
        for (int i = 0; i < b.size() - 1; i++) {
            long long temp = s * solve(a, b[i]);
            s = solve(temp, 10);
        }
        return s * solve(a, b[b.size() - 1]) % 1337;
    }
};


int main()
{
    Solution s;
    vector<int> b = {1,0};
    int a = 2;
    cout << s.superPow(a, b);
    return 0;
}