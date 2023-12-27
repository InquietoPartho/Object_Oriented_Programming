#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
    void display(string name){
        cout<<"Welcome the OOP Mr. "<<name<<endl;
    }
};
int main(){
    Student S;
    string name;
    cout<<"Please Enter you name Sir: "<<endl;
    getline(cin,name);
    // cin.ignore();
    S.display(name);
}