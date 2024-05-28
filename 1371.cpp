#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findTheLongestSubstring(string s) 
    {
        int ans = 0,num = 0;
        unordered_map<int,int>mp;    
        int i = 0;
        mp[num] = -1;

        while(i < s.length()){
            char ch = s[i];
            if(isVowel(ch) == true){
                char ch = s[i];
                int pos = ch - 'a';

                num = (num ^ (1<<pos));

                if(mp.find(num) != mp.end()){
                    int start = mp[num]+1;
                    int end = i;
                    int wind_size = (end - start + 1);

                    if(wind_size > ans)
                        ans = wind_size;
                }
            }
            else{
                int start = mp[num]+1;
                int end = i;
                int wind_size = (end - start + 1);

                if(wind_size > ans)
                    ans = wind_size;
            }
            if(mp.find(num) == mp.end()){
                mp[num] = i;
            }
            i++;
        }
        return ans;
    }
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            return true;

        return false;
    }
};

int main() {
    Solution s;
    string st = "Leetcode";
    cout<<s.findTheLongestSubstring(st)<<endl;
return 0;
}   