#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            int first = s.find('a'+i);
            int last = s.rfind('a'+i);
            if(first == last) continue;

            for (int j = 0; j < 26; j++) {
                int mid = s.find('a'+j,first+1);
                if(mid < last && mid != s.npos)
                    cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution s;
    cout<<s.countPalindromicSubsequence("aabca");
return 0;
}   