#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int n = hours.size();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if((hours[i] + hours[j]) % 24 == 0)
                    cnt++;
            }   
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> hours = {72,48,24,3};
    cout<<s.countCompleteDayPairs(hours)<<endl;
return 0;
}   