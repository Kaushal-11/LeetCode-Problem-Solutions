#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isStrictlyPalindromic(int n)
    {

        for (int i = 2; i <= n - 2; i++)
        {
            int temp = n;
            string str, tempstring;

            while (temp > 0)
            {
                int m = temp % i;
                char ch = m + 48; // convert integer to string 
                str.push_back(ch);  
                temp = temp / i;  
            }
            tempstring = str; 
            cout << str;

            reverse(str.begin(), str.end());
            cout << " - " << str << endl;

            if (str != tempstring)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << endl
         << s.isStrictlyPalindromic(9);
    return 0;
}