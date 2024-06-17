#include<bits/stdc++.h>
using namespace std;

class Solution {
    void reverse(vector<char> &s , int start , int end){
        if(start >= end)
            return;

        if(start != end)
            swap(s[start], s[end]);

        reverse(s, start + 1 , end - 1);
    }
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;
        reverse(s, start, end);
    }
};

int main() {
    Solution s;
    vector<char> v = {'h','e','l','l','o'};
    s.reverseString(v);
    for(auto x : v){
        cout<<x<<" ";
    }
return 0;
}