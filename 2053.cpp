#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(string s : arr)
            mp[s]++;
        
        for(string s : arr){
            if(mp[s] == 1){
                k--;
                if(k == 0)
                    return s;
            }
        }
        return "";
    }
};

int main() {
    Solution s;
    vector<string> arr = {"d","b","c","b","c","a"};
    int k = 2;
    cout<<s.kthDistinct(arr, k)<<endl;
return 0;
}   