#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int studentID;
    string name;
    public:
    void input(){
        cout<<"Please Enter your Student ID: "<<endl;
        cin>>studentID;
        cout<<"Please Enter your name"<<endl;
        cin>>name;
    }
    void show(){
        cout<<"Your name is: "<<name<<endl;;
        cout<<"Your SID is: "<<studentID<<endl;
    }
};
int main(){
    student s;
    cout<<"---------------Input-----------------"<<endl;
    s.input();
    cout<<"---------------Output-----------------"<<endl;
    s.show();

}