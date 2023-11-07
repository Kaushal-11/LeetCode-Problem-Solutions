#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            int m = num % 10;
            sum = sum + m;
            num = num / 10;
        }
        
        if(sum < 10){
            return sum;
        }        
        else
            return addDigits(sum); 
    }
};

int main()
{
    Solution s;
    s.addDigits(511);
    return 0;
}