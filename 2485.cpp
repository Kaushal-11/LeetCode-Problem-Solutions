#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotInteger(int &n)
    {
        int sum = 0;
        int total = n * (n + 1) / 2;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
            if (sum == total)
                return i;
            total -= i;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    int n = 8;
    cout<<s.pivotInteger(n);
    return 0;
}