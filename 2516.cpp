#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int> freq(3, 0);
        int n = s.length();
        for(char c : s)
            freq[c - 'a']++;
        
        if(freq[0] < k || freq[1] < k || freq[2] < k)
            return -1;

        vector<int> window(3, 0);
        int left = 0, maxi = 0;
        for (int right = 0; right < n; right++){
            window[s[right] - 'a']++;
            while(left <= right && (freq[0] - window[0] < k || freq[1] - window[1] < k || freq[2] - window[2] < k)){
                window[s[left] - 'a']--;
                left++;
            }
            maxi = max(maxi, right-left+1);
        }        
        return n-maxi;
    }
};

int main() {
    Solution s;
    string st = "aabaaaacaabc";
    int k = 2;
    cout<<s.takeCharacters(st, k);
    return 0;
}
