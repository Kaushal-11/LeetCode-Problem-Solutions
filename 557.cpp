#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int front = 0 , back = 0;
        while(front < s.size()){
            while(back < s.size() && s[back] != ' '){
                back++;
            }
        reverse(s.begin()+front , s.begin()+back);
        front = back + 1;
        back = front;
        }
    return s;
    }
};

int main() {
    Solution st;
    string s = "Khushi is kaushal's wife";
    cout<<st.reverseWords(s);
return 0;
}