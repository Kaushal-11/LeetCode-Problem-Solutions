#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        string temp;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                temp.push_back(s[i]);
            }
        }
        sort(temp.begin(),temp.end());
        int j = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                s[i] = temp[j];
                j++;
            }
        }
        return s;
    }
};

int main() {
    Solution s;
    string str = "lEetcOde";
    cout<<s.sortVowels(str);
return 0;
}   