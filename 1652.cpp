#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);
        if(k == 0)
            return result;
        
        int start = 1, end = k, sum = 0;
        if(k < 0){
            start = n - abs(k);
            end = n - 1;
        }
        for(int i = start; i <= end; i++)
            sum += code[i];
        
        for (int i = 0; i < n; i++)
        {
            result[i] = sum;
            sum -= code[start % n];
            sum += code[(end+1) % n];
            start++;
            end++;
        }
        return result;        
    }
};

int main() {
    Solution s;
    vector<int> code = {2,4,9,3};
    int k = -2;
    vector<int> result = s.decrypt(code, k);
    for(int x : result)
        cout<<x<<" ";
    return 0;
}
