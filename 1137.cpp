#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        int a = 0, b = 1, c = 1;
        for(int i = 3; i <= n; i++){
            int ans = a + b + c;
            a = b;
            b = c;
            c = ans;
        }
        return c;
    }
};

int main() {
    Solution s;
    int n = 25;
    cout<<s.tribonacci(n)<<endl;
return 0;
}   