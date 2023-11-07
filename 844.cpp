#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int x = s.length();
        int y = t.length();
        stack<char> s1,s2;

        for (int i = 0; i < x; i++)
        {
            if(s[i] == '#'){
                s1.pop();
            }else{
                s1.push(s[i]);
            }
        }

        for (int i = 0; i < y; i++)
        {
            if(t[i] == '#'){
                s2.pop();
            }else{
                s2.push(t[i]);
            }
        }
        
        if(s1.size() == s2.size()){
            while(!s1.empty()){
                if(s1.top() == s2.top()){
                    s1.pop();
                    s2.pop();
                }
                else{
                    return false;
                }
            }
        }
        else{
            return false;
        }

        return true;
    }
};

int main() {
    Solution S;
    string s = "ab##",t = "a#c#";
    cout<<S.backspaceCompare(s,t);
return 0;
}
