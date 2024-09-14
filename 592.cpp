#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0, denominator = 1;
        int i = 0, n = expression.length();

        while(i < n){
            int currNume = 0, currDeno = 0;
            bool isNegative = (expression[i] == '-');

            if(expression[i] == '+' || expression[i] == '-')
                i++;
            
            while(i < n && isdigit(expression[i])){
                int val = expression[i] - '0';
                currNume = (currNume * 10) + val;
                i++;
            }

            i++;
            if(isNegative == true)
                currNume *= -1;

            while(i < n && isdigit(expression[i])){
                int val = expression[i] - '0';
                currDeno = (currDeno * 10) + val;
                i++;
            }
            
            numerator = numerator * currDeno + currNume * denominator;
            denominator = denominator * currDeno;
        }

        int gcd = abs(__gcd(numerator, denominator));
        numerator /= gcd;
        denominator /= gcd;
        
        return to_string(numerator) + "/" + to_string(denominator);
    }
};

int main() {
    Solution s;
    string st = "1/3-1/2";
    cout<<s.fractionAddition(st);
    return 0;
}
