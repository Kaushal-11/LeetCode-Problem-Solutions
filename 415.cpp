#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string StringSummation(string num1 ,int p1, string num2, int p2, int carry = 0){
        // Base case
        if(p1 < 0 && p2 < 0){
            if(carry != 0){
                return string(1 , carry + '0');
            }
            return "";
        }

        //One case
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        int unitSum = n1 + n2 + carry;
        int digit = unitSum % 10;
        carry = unitSum / 10;
        string ans = "";
        ans.push_back(digit + '0');

        ans = ans + StringSummation(num1 , p1-1 , num2 , p2-1 , carry);
        return ans;
    }
    string addStrings(string num1, string num2)
    {
        string ans = StringSummation(num1 , num1.size()-1 , num2 , num2.size() - 1);
        reverse(ans.begin() , ans.end());
        return ans;
    }
};

int main()
{   
    string num1 = "76", num2 = "77" ;
    Solution s;
    cout<<s.addStrings(num1 , num2);
    return 0;
}