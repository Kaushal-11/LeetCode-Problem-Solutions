#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool isValid(string& word, unordered_map<char, int>& lmp, unordered_map<char, int> wmp){
        for(auto c : word){
            wmp[c]++;
            if(wmp[c] > lmp[c])
                return false;
        }
        return true;
    }

    int sum;

    void solve(int i,vector<string>& words, vector<int>& score,unordered_map<char, int>& lmp, unordered_map<char, int>& wmp){
        int n = words.size();
        if(i == n){
            int curr = 0;
            for(auto it = wmp.begin(); it != wmp.end(); ++it) {
                char c = it->first;
                int freq = it->second;
                curr += freq * score[c - 'a'];
            }
        }

        if(isValid(words[i], lmp, wmp)){
            for(auto c: words[i])
                wmp[c]++;
            solve(i+1, words, score, lmp, wmp);
            for(auto c : words[i])
                wmp[c]--;
        }

        solve(i+1, words, score, lmp, wmp);
        return;
    }

public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        sum = 0;
        unordered_map<char, int> lmp, wmp;
        for(auto c : letters)
            lmp[c]++;

        solve(0, words, score, lmp, wmp);
        return sum;
    }
};

int main() {
    Solution s;
    vector<string> words = {"dog","cat","dad","good"};
    vector<char> letters = {'a','a','c','d','d','d','g','o','o'};
    vector<int> score = {1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0};
    cout<<s.maxScoreWords(words, letters, score);
    return 0;
}   
