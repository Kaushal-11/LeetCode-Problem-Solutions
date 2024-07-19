#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(string &s, string temp){
        int n = s.size();
        int cnt = 0;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if(!st.empty() && s[i] == temp[1] && st.top() == temp[0]){
                st.pop();
                cnt++;
            }
            else
                st.push(s[i]);
        }
        s = "";
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return cnt;
    }

    int maximumGain(string s, int x, int y) {
        string low = "", high = "";
        if(y > x){
            low = "ab";
            high = "ba";
            swap(x,y);
        }else{
            low = "ba";
            high = "ab";
        }
        int cnt1 = solve(s, high) * x;
        int cnt2 = solve(s, low) * x;

        return cnt1 + cnt2;
    }
};

int main() {
    Solution s;
    string st = "cdbcbbaaabab";
    int x = 4, y = 5;
    cout<<s.maximumGain(st, x, y);
return 0;
}   