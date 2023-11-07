#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int integerBreak(int n) {
        if(n <= 3){
            return n - 1;
        }
        int ans = 1;
        while(n > 4){
            ans *= 3;
            n -= 3;
        }
        return (ans * n);
    }
};

int main() {
    Solution s;
    cout<<s.integerBreak(2);
return 0;
}