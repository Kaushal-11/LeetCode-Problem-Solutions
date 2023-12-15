#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        int temp = -1;
        string ans = "";
        for(int i = 1 ; i < num.length(); i++){
            if(num[i-1] == num[i] && num[i] == num[i+1]){
                temp = max(temp, num[i]-'0');
            }
        }
        if(temp == -1)
            return ans;
        else{
            ans = to_string(temp)+to_string(temp)+to_string(temp);
            return ans;
        }
    }
};

int main() {
    Solution s;
    string num = "333";
    cout<<s.largestGoodInteger(num);
return 0;
}   