#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canChange(string start, string target) {
        string s1 = "", s2 = "";
        vector<int> l1,l2,r1,r2;

        if(start.length() != target.length()) 
            return false;
        for (int i = 0; i < start.length(); i++)
        {
            if(start[i] == 'L'){
                s1 += 'L';
                l1.push_back(i);
            }
            else if(start[i] == 'R'){
                s1 += 'R';
                r1.push_back(i);
            }
            if(target[i] == 'L'){
                s2 += 'L';
                l2.push_back(i);
            }
            else if(target[i] == 'R'){
                s2 += 'R';
                r2.push_back(i);
            }
        }

        if(s1 != s2) 
            return false; 
        
        for (int i = 0; i < l1.size(); i++){
            if(l2[i] > l1[i])
                return false;
        }
        for (int i = 0; i < r1.size(); i++){
            if(r2[i] < r1[i])
                return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    string start = "_L__R__R_", target = "L______RR";
    cout<<s.canChange(start, target)<<endl;
    return 0;
}
