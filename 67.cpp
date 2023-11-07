#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int a_size  = a.length()-1;
        int b_size  = b.length()-1;
        int carry = 0;
        string ans = "";
        while(a_size>=0 || b_size>=0 || carry){
            if(a_size>=0){
                carry += a[a_size--] - 48;
            }
            if(b_size>=0){
                carry += b[b_size--] - 48;
            }
            ans = char(carry%2 + 48) + ans;
            carry /= 2;
        }
        return ans;
    }
};

int main() {
    string s1 = "101" , s2 = "11";
    Solution s;
    cout<<s.addBinary(s1,s2);
return 0;
}   