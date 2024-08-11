#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> ones = {"","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> teens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string find(int num)
    {
        string result = "";
        if(num<10)
            result = ones[num];
        else
            if(num<20)
                result = teens[num-10];
        else
            if(num<100)
                result = tens[num/10] + " " + find(num%10);
        else
            if(num<1000)
                result = find(num/100) + " Hundred " + find(num%100);
        else
            if(num<1000000)
                result = find(num/1000) + " Thousand " + find(num%1000);
        else
            if(num<1000000000)
                result = find(num/1000000) + " Million " + find(num%1000000);
        else
            result = find(num/1000000000) + " Billion " + find(num%1000000000);
            
        int size = result.length();
        if(size>0 && result[size-1]==' ')
            result = result.substr(0, size-1);
        return result;
    }

    string numberToWords(int num) {
        if(num == 0)
           return "Zero";
        return find(num);
    }
};

int main() {
    Solution s;
    int num = 12345672;
    cout << s.numberToWords(num) << endl;
    return 0;
}
