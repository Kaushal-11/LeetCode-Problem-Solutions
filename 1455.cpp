#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int currWord = 1;
        int curr = 0;
        int len = sentence.length();

        while (curr < len) {
            while (curr < len && sentence[curr] == ' ') {
                curr++;
                currWord++;
            }

            int matchCount = 0;
            while (curr < len && matchCount < searchWord.length() && sentence[curr] == searchWord[matchCount]) {
                curr++;
                matchCount++;
            }

            if (matchCount == searchWord.length()) {
                return currWord;
            }

            while (curr < len && sentence[curr] != ' ') {
                curr++;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    string sentence = "i love eating burger", searchWord = "burg";
    cout<<s.isPrefixOfWord(sentence, searchWord)<<endl;
    return 0;
}
