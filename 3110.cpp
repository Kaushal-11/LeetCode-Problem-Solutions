#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        int n = s.length();
        for (int i = 0; i < n-1; i++)
        {
            sum += abs(s[i] - s[i + 1]);
        }
        return sum;        
    }
};

int main() {
    Solution s;
    string st = "hello";
    cout<<s.scoreOfString(st);
return 0;
}   