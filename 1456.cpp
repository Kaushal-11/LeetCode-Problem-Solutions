#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int ans = 0;
        int count;
        for (int i = 0; i <= s.length() - k; i++)
        {
            count = 0;
            for (int j = i; j < i+k; j++)
            {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                {
                    count++;
                }

                if (count == k)
                {
                    return k;
                }
            }
            ans = max(ans, count);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string str = "abciiidef";
    int k = 3;
    cout << s.maxVowels(str, k);
    return 0;
}