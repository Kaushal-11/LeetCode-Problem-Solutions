#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        func(0, s, temp, ans);
        return ans;
    }

    void func(int index, string s, vector<string> &temp, vector<vector<string>>& ans){
        if(index == s.size()){
            ans.push_back(temp);
            return;
        }

        for (int i = index; i < s.size(); i++)
        {
            if(isPalindrome(s, index, i)){
                temp.push_back(s.substr(index, i-index+1));
                func(i+1, s, temp, ans);
                temp.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int start, int end){
        while(start <= end){
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    string st = "aaab";
    vector<vector<string>> ans = s.partition(st);
    for(auto it : ans){
        for(auto x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;
}   