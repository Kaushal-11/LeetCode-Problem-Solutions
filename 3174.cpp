#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        int n = s.length();

        while(true){
            bool flag = false;
            for (int i = 0; i < n; i++){
                if(isdigit(s[i])){
                    flag = true;
                    for (int j = i-1; j >= 0; j--){
                        if(!isdigit(s[j])){
                            s.erase(j, 1);
                            --i;
                            break;
                        }
                    }
                    s.erase(i, 1);
                    --i;
                    --n;
                    break;
                }
            }
            if(!flag)
                break;
        }
        return s;
    }
};

int main() {
    Solution s;
    string st = "34cb";
    cout<<s.clearDigits(st)<<endl;
return 0;
}   