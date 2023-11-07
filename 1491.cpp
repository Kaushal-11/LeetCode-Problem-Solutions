#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        
        salary.erase(salary.begin());
        salary.erase(salary.end()-1);
        return (double)accumulate(salary.begin(),salary.end(),0)/salary.size();
    }
};

int main() {
    vector<int> s = {4000,3000,1000,2000};
    Solution s1;
    cout<<s1.average(s);
return 0;
}