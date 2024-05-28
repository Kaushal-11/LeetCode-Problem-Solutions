#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> revealed(n),indices(n);
        int pos = 0;
        
        sort(deck.begin(), deck.end());
        for (int i = 0; i < n; ++i) {
            indices[i] = i;
        }
        
        for (int card : deck) {
            revealed[indices[0]] = card;
            indices.erase(indices.begin());
            
            if (!indices.empty()) {
                indices.push_back(indices[0]);
                indices.erase(indices.begin());
            }
        }
        
        return revealed;
    }
};

int main() {
    Solution s;
    vector<int> deck = {17,13,11,2,3,5,7};
    vector<int> ans = s.deckRevealedIncreasing(deck);
    for(int x : ans) {
        cout<<x<<" ";
    }
return 0;
}   