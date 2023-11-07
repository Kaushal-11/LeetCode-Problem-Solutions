#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        for(int i = n-1; i >= 0;i--){
            for (int j = 0; j < n-i; j++)
            {
                if(check(s,j,i+j)){
                    return s.substr(j,i+1);
                }
            }
        }
        return "";
    }

    bool check(string &s, int j , int i){
        while(j < i){
            if(s[i--] != s[j++]){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution st;
    string s = "ababc";
    cout<<st.longestPalindrome(s);
return 0;
}