#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int left = 0 , right = 0;
        for (int i = 0; i < n/2; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                left++;
        }
        for (int i = n/2; i < n; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                right++;   
        }
        if(left == right)
            return true;
        else
            return false;
    }
};

int main() {
    Solution s;
    cout<<s.halvesAreAlike("book");
return 0;
}   