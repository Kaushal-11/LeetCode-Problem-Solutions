#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum(int n){
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += (digit * digit);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        if(n == 1 || n == 7)
            return true;

        if(n < 10 && n != 1)
            return false;

        return isHappy(sum(n));
    }
};

int main() {
    Solution s;
    int n = 19;
    cout<<s.isHappy(n)<<endl;
return 0;
}   