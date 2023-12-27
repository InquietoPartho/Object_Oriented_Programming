#include<bits/stdc++.h>
using namespace std;
#define MAX 10
class Student{
    string name;
    int roll;
    int marks;
public:
    void getdata();
    void display();
};
void Student::getdata(){
    cout<<"Please Enter the name: ";
    cin>>name;
    cout<<"Plase Enter your roll"<<" ";
    cin>>roll;
    cout<<"Enter the Marks"<<endl;
    cin>>marks;
}
void Student::display(){
    cout<<"Name: "<<name;
    cout<<"roll: "<<" ";
    cout<<"Marks: "<<endl;
}
int main(){
    Student s[MAX];
    int n;
    cout<<"Please Enter the number of the student: ";
    cin>>n;
    cout<<endl;
    cout<<"Please enter the following informtion: "<<endl;

    for(int i = 0;i<n;i++){
        cout<<"\nEnter the record of the students of S["<<i << "]: "<<endl;
        s[i].getdata();
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<"\nThe record of the S["<<i <<"]:"<<endl;
        s[i].display();
    }
}