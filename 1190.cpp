#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string ans;

        for(char c : s){
            if(c == '('){
                st.push(ans);
                ans = "";
            }else if(c == ')'){
                reverse(ans.begin(), ans.end());
                ans = st.top() + ans;
                st.pop();
            }else{
                ans += c;
            }
        }

        return ans;
    }
};

int main() {
    Solution s;
    string st = "(u(love)i)";
    cout<<s.reverseParentheses(st);
return 0;
}   