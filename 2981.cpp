#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLength(string s) {
        map<string, int> count;
        for (int i = 0; i < s.length(); i++) {
            string curr;
            for (int j = i; j < s.length(); j++) {
                if (curr.empty() || curr.back() == s[j]) {
                    curr.push_back(s[j]);
                    count[curr]++;
                } else {
                    break;
                }
            }
        }
        int ans = 0;
        for (auto i : count) {
            string str = i.first;
            if (i.second >= 3 && str.length() > ans) 
                ans = str.length();
        }
        if (ans == 0) 
            return -1;
        return ans;
    }
};

int main() {
    Solution s;
    string st = "abcaba";
    cout<<s.maximumLength(st);
    return 0;
}
