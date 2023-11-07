#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int sum = 0 , cnt = 0;
        int temp  = x , rem;
        while(x){
            x = x/10;
            cnt++;
        }
        for (int i = 0; i < cnt; i++)
        {
            if(sum > INT_MAX/10 || sum < INT_MIN/10){
                return 0;
            }
            else{
            rem = temp % 10;
            sum = sum*10 + rem; 
            temp = temp / 10;
            }
        }
        return sum;
    }
};

int main() {
    Solution s;
    cout<<s.reverse(153);
return 0;
}   