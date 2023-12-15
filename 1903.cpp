#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
          string ans = "";
          for (int i = num.size()-1; i >= 0; i--){
            if(int(num[i])%2 != 0 && int(num[i])!=0){
                return num.substr(0,i+1);
            }
          }
          return "";
    }
};

int main() {
    Solution s;
    cout<<s.largestOddNumber("461");
return 0;
}   