#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() > t.length()) return false;

        int tsize = t.length();
        int temp = 0;
        for(int i = 0; i < tsize ; i++){
            if(s[temp] == t[i]){
                temp++;
            }
        }
        return temp == s.length() ;
    }
};
int main() {
    Solution st;
    string s = "code";
    string t = "leetcode";
    cout<<st.isSubsequence(s,t);
return 0;
}