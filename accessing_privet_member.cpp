#include<bits/stdc++.h>
using namespace std;
class Student{
    int roll;
    string name;
    void getdata();

    public:
    void display();
};

void Student::getdata(){
    cout<<"Please Enter your roll ";
    cin>>roll;
    cout<<endl;
    cout<<"Please Enter your name: ";
    cin>>name;
}
void Student::display(){
    getdata();//access to the privet data
    cout<<"Your roll is: "<<roll<<" ";
    cout<<"Your name is: "<<name;
}
int main(){
    Student S;
    // S.getdata(); //Not accessible the privet data;
    S.display();
}