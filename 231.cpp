#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        while (n > 0)
        {
            if (n == 1)
                return true;
            if (n % 2)
                return false;
            n /= 2;
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout<<s.isPowerOfTwo(1023);
    return 0;
}