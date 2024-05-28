#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k == num.length())
            return "0";
        string ans = "";
        for(char c : num){
            while(ans.size() > 0 && ans[ans.size()-1] > c && k>0){
                ans.pop_back();
                k--;
            }
            ans += c;
        }
        while(k){
            ans.pop_back();
            k--;
        }
        int i = 0;
        while(i < ans.length() && ans[i] == '0'){
            i++;
        }
        return ans.substr(i) == ""?"0":ans.substr(i);
    }
};

int main() {
    Solution s;
    string num = "12345";
    int k = 3;
    cout<<s.removeKdigits(num,k)<<endl;
return 0;
}   