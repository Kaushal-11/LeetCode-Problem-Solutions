#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int maxi = 0;
        int start = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if(m.find(s[i]) != m.end()){
                start = max(start, m[s[i]]+1);
            }
            m[s[i]] = i;
            maxi = max(maxi , i-start+1);
        }
        return maxi;
    }
};

int main() {
    Solution st;
    string s = "ababaca";
    cout<<st.lengthOfLongestSubstring(s);
return 0;
}   