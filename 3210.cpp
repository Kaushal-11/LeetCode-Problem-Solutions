#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans = "";
        int n = s.size();
        for (int i = 0; i < n ;i++)
        {
            int index = (i+k)%n;
            ans += s[index];
        }
        return ans;
    }
};

int main() {
    Solution s;
    string st = "dart";
    int k = 3;
    cout<<s.getEncryptedString(st, k);    
return 0;
}   