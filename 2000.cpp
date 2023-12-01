#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index;
        for(int i = 0 ; i < word.length() ; i++){
            if(word[i] == ch){
                index = i;
                break;
            }
        }

        if(index == word.length()){
            return word;
        }
        
        reverse(word.begin(),word.begin()+index+1);
        return word;
    }
};

int main() {
    Solution s;
    string str = "abcdefd";
    char ch = 'd';
    cout<<s.reversePrefix(str,ch);
return 0;
}   