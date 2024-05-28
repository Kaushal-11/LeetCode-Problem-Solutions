#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getSum(int a, int b)
    {
        while (b != 0)
        {
            int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};

int main() {
   Solution s;
   int a = 2, b = 3;
   cout<<s.getSum(a,b);
return 0;
}