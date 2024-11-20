#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == ' ' && sentence[i-1] != sentence[i+1])
                return false;
        }
        return sentence[0] == sentence[sentence.size()-1];
    }
};

int main() {
    Solution s;
    string sentence = "leetcode exercises sound delightful";
    cout<<s.isCircularSentence(sentence)<<endl;
    return 0;
}
