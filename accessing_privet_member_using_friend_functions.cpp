#include<bits/stdc++.h>
using namespace std;
class student{
private:
    string name;
    int roll;
    float marks;
    void getdata();
    friend void display(student S);
};

void student::getdata(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<endl;
    cout<<"Enter roll: ";
    cin>>roll;
    cout<<endl;
    cout<<"Enter marks: ";
    cin>>marks;
    cout<<endl;
}
inline void display(student S){
    S.getdata();
    cout<<"Name is "<<S.name<<" ";
    cout<<"ID is "<<S.roll<<" ";
    cout<<"Marks is "<<S.marks;
}
int main(){
    student x;
    display(x);
}