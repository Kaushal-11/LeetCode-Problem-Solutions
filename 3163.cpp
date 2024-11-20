#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int pos = 0;

        while (pos < word.length()) {
            int cnt = 0;
            char curr = word[pos];

            while (pos < word.length() && cnt < 9 && word[pos] == curr) {
                cnt++;
                pos++;
            }
            comp += to_string(cnt) + curr;
        }
        return comp;
    }
};

int main() {
    Solution s;
    string word = "abcde";
    cout<<s.compressedString(word)<<endl;
    return 0;
}
