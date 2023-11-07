#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> answer;
        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
            {
                answer.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                answer.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                answer.push_back("Buzz");
            }
            else
                answer.push_back(to_string(i));
        }
        return answer;
    }
};

int main()
{   
    vector<string> ans;
    int n = 7;
    Solution s;
    ans = s.fizzBuzz(n);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}
