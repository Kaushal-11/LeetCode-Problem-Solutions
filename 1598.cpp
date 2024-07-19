#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        int n = logs.size();

        for(int i=0 ; i<n ; i++){
            if(logs[i]=="./")
                continue;
            else if(logs[i]=="../"){
                if(cnt == 0)
                    continue;
                else
                    cnt--;
            }
            else
                cnt++;
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<string> logs = {"d1/","d2/","../","d21/","./"};
    cout<<s.minOperations(logs)<<endl;
return 0;
}   