#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<long long>> floyd(26, vector<long long>(26, 1e9));
        int n = original.size();

        for (int i = 0; i < n; i++){
            floyd[original[i]-'a'][changed[i]-'a'] = min((long long)cost[i], floyd[original[i]-'a'][changed[i]-'a']);
        }
        
        for (int via = 0; via < 26; via++){
            for (int i = 0; i < 26; i++){
                for (int j = 0; j < 26; j++){
                    floyd[i][j] = min(floyd[i][j], floyd[i][via]+floyd[via][j]);
                }                
            }            
        }

        long long sum = 0;
        for (int i = 0; i < source.length(); i++)
        {
            if(source[i]-'a' == target[i]-'a')
                continue;
            long long temp = floyd[source[i]-'a'][target[i]-'a'];
            if(temp == 1e9)
                return -1;
            sum += temp;
        }
        return sum;
    }
};

int main() {
    Solution s;
    string source = "abcd", target = "acbe";
    vector<char> original = {'a','b','c','c','e','d'}, changed = {'b','c','b','e','b','e'};
    vector<int> cost = {2,5,5,1,2,20};
    cout<<s.minimumCost(source, target, original, changed, cost);
    return 0;
}   