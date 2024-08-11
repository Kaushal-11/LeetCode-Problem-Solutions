#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int cnt_zero = 0, cnt_one = 0;
            for (int j = i; j < n; j++) {
                if (s[j] == '0')
                    cnt_zero++;
                else
                    cnt_one++;
                

                if (cnt_one >= cnt_zero * cnt_zero) 
                    cnt++;                
            }
        }

        return cnt;
    }
};

int main() {    
    Solution s;
    string st = "101101";
    cout << s.numberOfSubstrings(st) << endl;
    return 0;
}
