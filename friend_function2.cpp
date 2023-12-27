#include<bits/stdc++.h>
using namespace std;
class Student{
private:
    long roll;
public:
    void getdata();
    void display();
};
class exam{
private:
public:
    float marks;
    friend void Student::display(); 
};

void Student::getdata(){
    cout<<"Enter roll: ";
    cin>>roll;
}
void display(){
    exam E;
    cout<<"Enter marks: ";
    cin>>E.marks;
    cout<<endl;
    cout<<"marks is: "<<E.marks;
    cout<<endl;
}
int main(){
    Student s;
    s.getdata();
    s.display();
    display();
}