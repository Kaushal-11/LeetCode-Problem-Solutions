#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        double sum = 0;

        if(x < 0){
            return 0;
        }

        while(x > 0){
            double m = x % 10;
            sum = (sum * 10) + m;
            x = x / 10;
        }
        if( sum == temp)
            return 1;
        else
            return 0;
    }
};

int main() {
    Solution s;
    int res = s.isPalindrome(-121);
    cout<<res;
    
return 0;
}