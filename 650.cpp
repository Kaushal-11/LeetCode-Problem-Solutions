#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(int n) {
        int steps = 0;
        int factor = 2;
        while (n > 1) {
            while (n % factor == 0) {
                steps += factor;
                n /= factor;
            }
            factor++;
        }
        return steps;
    }
};

int main() {
    Solution s;
    cout<<s.minSteps(3);
    return 0;
}
