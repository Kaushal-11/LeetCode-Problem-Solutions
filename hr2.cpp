#include<bits/stdc++.h>
using namespace std;

class Event{
    public :
    int roll_no;
    string name;
    string gender;
    static int E_male;
    static int E_female;

    void getData(){
        cin>>roll_no;
        cin>>name;
        cin>>gender;
        if(gender == "Male"){
            E_male++;
        }
        else    
            E_female++;
    }

    void putData(){
        cout<<roll_no<<endl;
        cout<<name;
        cout<<gender;
    }
    
    static void data(){
        cout<<"Number of Students"<<endl;
        cout<<"Female: "<<E_female<<endl;
        cout<<"Male: "<<E_male<<endl;
    }
};

int Event :: E_male;
int Event :: E_female;

int main() {
    Event s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].getData();
    }

    for (int i = 0; i < 5; i++)
    {
        s[i].putData();
    }
    cout<<endl;

    Event :: data();
    
return 0;
}