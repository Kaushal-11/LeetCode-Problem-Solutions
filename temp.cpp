//This program is made by sujal Vekariya
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(m);
        vector<int> b(k);
        set<int> s;
        for(int i=0;i<m;i++)
            cin>>a[i];
        
        for(int i=0;i<k;i++)
        {
            cin>>b[i];
            s.insert(b[i]);
        }

        if(k==n){
            for(int i=0;i<m;i++)
                cout<<1;
        }
        else if(k==n-1){
            for(int i=0;i<m;i++){
                if(s.find(a[i])==s.end())
                    cout<<1;
                else
                    cout<<0;
            }
        }
        else{
            for(int i=0;i<m;i++)
                cout<<0;
        }
        cout<<endl;
    }
    return 0;
}