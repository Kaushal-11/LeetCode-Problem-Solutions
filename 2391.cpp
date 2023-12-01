#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int sum = 0;
        int v[120]{};

        for(int i = 0; i < garbage.size();i++){
           for(char c : garbage[i]){
                sum += exchange(v[c], 0) + 1;
           }
           if(i < travel.size()){
            v['P'] += travel[i];
            v['M'] += travel[i];
            v['G'] += travel[i];
           }
        }
        cout<<sum<<endl;
        return sum;
    }
};

int main() {
    Solution s;
    vector<string> g = {"G","P","GP","GG"};
    vector<int> n = {2,4,3};
    cout<<s.garbageCollection(g,n);
return 0;
}   