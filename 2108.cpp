#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j)
        {
            if (s[i] != s[j])
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }

    string firstPalindrome(vector<string> &words)
    {
        string ans = "";
        for (int i = 0; i < words.size(); i++)
        {
            if (isPalindrome(words[i])){
                ans = words[i];
                break;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<string> words = {"notapalindrome","racecar"};
    cout<<s.firstPalindrome(words)<<endl;
    return 0;
}