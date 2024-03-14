#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1){
            return 1;
        }
        if( n == 2){
            return 2;
        }
        int a = 1;
        int b = 2;
        int i = 2;
        while(i < n){
            b += a;
            a = b - a;
            i++; 
        }

        return b;
    }
};

int main() {
    Solution s;
    cout<<s.climbStairs(3);
return 0;
}   