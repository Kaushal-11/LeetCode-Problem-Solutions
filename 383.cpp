#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for (int i = 0; i < ransomNote.size(); i++)
        {
            mp1[ransomNote[i]]++;
        }
        for (int i = 0; i < magazine.size(); i++)
        {
            mp2[magazine[i]]++;
        }
        for(auto i = mp1.begin(); i != mp1.end(); i++){
            if(mp2[(*i).first] < (*i).second)
                return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    string ransomNote = "aa", magazine = "aab";
    cout<<s.canConstruct(ransomNote, magazine);
return 0;
}   