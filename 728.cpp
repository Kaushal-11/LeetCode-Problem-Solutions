#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool SelfDivideNumber(int num)
    {
        int a = num;
        while(num)
        {
            int x = num % 10;
            if(x == 0) return false;
            if(a % x != 0) return false;
            num /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left; i<=right; i++)
        {
            if(SelfDivideNumber(i)) result.push_back(i);
        }
        return result;
    }
};

int main() {
    Solution s;
    int left = 45, right = 53;
    vector<int> result = s.selfDividingNumbers(left, right);
    for(int x : result)
        cout<<x<<" ";
return 0;
}