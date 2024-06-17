#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        int l = 0, r = sqrt(c);
        while(l <= r){
            if(l*l + r*r == c)
                return true;
            else if(l*l + r*r > c)
                r--;
            else
                l++;
        }
        return false;
    }
};

int main() {
    Solution s;
    int n = 5;
    cout<<s.judgeSquareSum(n);    
return 0;
}