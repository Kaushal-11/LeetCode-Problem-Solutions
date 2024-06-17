#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSteps(string s) {
        int n = s.length();
        int carry = 0;
        int i = n - 1;
        int cnt = 0;

        while (i > 0) {
            if (s[i] == '1') {
                if (carry == 0) {
                    cnt += 2; 
                    carry++;
                } else {
                    cnt++;
                }
            } else { 
                cnt++;
                if (carry == 1) {
                    cnt++;
                }
            }
            i--;
        }

        if (carry == 1) {
            cnt++;
        }

        return cnt;
    }
};

int main() {
    Solution s;
    string st = "1101";
    cout<<s.numSteps(st);
return 0;
}   