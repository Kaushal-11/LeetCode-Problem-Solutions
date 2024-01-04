#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(), citations.end());
        for(int i = n-1; i >= 0; i--) {
            if(n-i >= citations[i])
                return max(n-i-1,citations[i]);
        }
        return n;
    }
};

int main() {
    Solution s;
    vector<int> citations = {3,0,6,1,5};
    cout << s.hIndex(citations) << endl;
return 0;
}   