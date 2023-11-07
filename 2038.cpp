#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size()<2){
            return false;
        }
        int cnt_A = 0 ,cnt_B = 0;
        for (int i = 1; i < colors.size()-1; i++)
        {
            if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A'){
                cnt_A++;
            }
            else if(colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B'){
                cnt_B++;
            }
        }
        return cnt_A>cnt_B;
    }
};

int main() {
    Solution s;
    string co = "AABAA";
    cout<<s.winnerOfGame(co);
return 0;
}