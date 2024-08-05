#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPrime(int num) {
        if (num < 2) 
            return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) 
                return false;
        }
        return true;
    }

    int nonSpecialCount(int l, int r) {
        int cnt = 0;
        for (int i = 2; i * i <= r; i++) {
            if (isPrime(i)) {
                int square = i * i;
                if (square >= l && square <= r) {
                    cnt++;
                }
            }
        }   
        return r - l - cnt + 1;
    }
};

int main() {
    Solution s;
    int l = 4, r = 16;
    cout << s.nonSpecialCount(l, r) << endl;
    return 0;
}
