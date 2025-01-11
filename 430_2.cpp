#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string answerString(string word, int friends) {
        if (friends == 1) 
            return word;
        
        vector<int> temp;
        char maxi = 'a';
        
        for (int i = 0; i < word.size(); ++i) {
            char curr = word[i];
            if (curr > maxi) {
                maxi = curr;
                temp.clear();
            }
            if (curr == maxi) {
                temp.push_back(i);
            }
        }

        string ans = "";
        for (int index : temp) 
        {
            int length = word.size() - (friends - 1 - index);
            ans = max(ans, word.substr(index, length - index));
        }
        return ans;
    }
};

int main() {
    Solution s;
    string word = "dbca";
    int num = 2;
    cout<<s.answerString(word, num)<<endl;
    return 0;
}
