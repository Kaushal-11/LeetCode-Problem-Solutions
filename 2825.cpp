#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        if(str1==str2)
            return true;
        int j=0;
        for(int i=0;i<str1.length();i++){
            if(str1[i]==str2[j])
            j++;
            else{
                if(str1[i]=='z'){
                    str1[i]='a';
                    if(str1[i]==str2[j])
                    j++;
                }
                else{
                    if(str1[i]+1==str2[j])
                        j++;
                }
            }
        }
        if(j==str2.length())
            return true;
        else
            return false;
    }
};

int main() {
    Solution s;
    string s1 = "abc", s2 = "ad";
    cout<<s.canMakeSubsequence(s1, s2)<<endl;
    return 0;
}
