#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int, int> get_num(string n){
        string real = "";
        string img = "";
        string temp = "";
        for(char c : n){
            if(c == 'i'){
                img = temp;
                break;
            }
            if((c == '+' || c == '-') && temp.size() > 0 && real.size() == 0){
                real = temp;
                temp = "";
            }else{
                temp += c;
            }
        }
        int a = stoi(real);
        int b = stoi(img);
        return {a,b};
    }
    string complexNumberMultiply(string num1, string num2) {
        pair<int, int> f = get_num(num1);
        pair<int, int> s = get_num(num2);

        int real = (f.first*s.first - f.second*s.second);
        int img = (f.first*s.second + f.second*s.first);

        string ans = to_string(real) +"+"+ to_string(img)+"i";
        return ans;
    }
};

int main() {
    Solution s;
    string nums1 = "1+1i";
    string nums2 = "1+1i";
    string ans = s.complexNumberMultiply(nums1,nums2);
    cout<<ans;
return 0;
}   