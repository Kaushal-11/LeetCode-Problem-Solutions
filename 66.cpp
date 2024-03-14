#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n-1; i >= 0; i--)
        {
            if(i == n-1){
                digits[i]++;
            }
            if(digits[i] == 10){
                digits[i] = 0;
                if(i !=0){
                    digits[i-1]++;
                }
                else{
                    digits.push_back(0);
                    digits[i] = 1;
                }
            }
        }
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> digits = {1,2,3,4};
    vector<int> ans = s.plusOne(digits);
    for(auto x : digits) {
        cout << x <<" ";
    }
return 0;
}   