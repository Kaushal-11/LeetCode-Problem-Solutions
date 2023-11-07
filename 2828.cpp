#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string temp = "";
        for (int i = 0; i < words.size(); i++)
        {
            temp += words[i].at(0);
        }
        if(temp == s){
            return true;
        }
        else 
            return false;
    }
};

int main() {
    Solution st;
    vector<string> words = {"alice","bob","charlie"};
    string s = "ab";
    cout<<st.isAcronym(words, s);
return 0;
}