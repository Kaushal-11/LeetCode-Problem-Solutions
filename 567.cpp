#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int count1[26];
    int count2[26];

    bool equal_permutation(){
        for(int i = 0 ; i< 26 ; i++){
            if(count1[i] != count2[i])return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        int n1 = s1.length();
        int n2 = s2.length();

        for(int i = 0 ; i<26 ; i++){
            count1[i]=0;
            count2[i]=0;
        }

        for(int i = 0 ; i< n1 ; i++){
            count1[s1[i]-'a']++;
            count2[s2[i]-'a']++;
        }

        if(equal_permutation())return true;

        for(int i = n1 ; i<n2 ; i++){
            count2[s2[i]-'a']++;
            count2[s2[i-n1]-'a']--;
            if(equal_permutation())return true;
        }

        return false;
    }
};

int main() {
    Solution s;
    string st1 = "ab", st2 = "bac";
    cout<<s.checkInclusion(st1,st2)<<endl;
    return 0;
}
