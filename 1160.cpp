#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        unordered_map<char,int> cnt;
        for (int i = 0; i < chars.size(); i++)
        {
            cnt[chars[i]]++;
        }
        
        for(int i = 0 ; i < words.size(); i++){
            unordered_map<char, int> temp = cnt;
            string currentWord = words[i];

            for(int  j = 0; j < currentWord.size() ; j++){
                char c = currentWord[j];
                if(temp[c] <= 0)
                    break;
                temp[c]--;
                if(j == currentWord.size()-1)
                    sum += currentWord.size();
            }
        }    
        return sum;
    }
};

int main() {
    Solution s;
    vector<string> words = {"cat","bt","hat","tree"};
    string chars = "atach";
    cout<<s.countCharacters(words,chars);
return 0;
}   