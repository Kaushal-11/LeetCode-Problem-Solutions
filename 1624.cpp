#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        int ans = -1;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(s[i] == s[j]){
                    ans = max(ans, j-i-1);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    string st = "abca";
    cout<<s.maxLengthBetweenEqualCharacters(st);
return 0;
}   