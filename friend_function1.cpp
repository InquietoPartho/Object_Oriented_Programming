#include<bits/stdc++.h>
using namespace std;
class Exam;
class Student{
private:
    float tutorial;
    public:
    void getdata();
    void display();
    friend float total(Student,Exam);
};
class Exam{
private:
    float final;
public:
    void getdata();
    void display();
    friend float total(Student,Exam);
};

void Student::getdata(){
    cout<<"Enter tutorial mark: ";
    cin>>tutorial;
}
void Exam::getdata(){
    cout<<"Enter final mark: ";
    cin>>final;
}
void Student::display(){
    cout<<"Tutorial mark: "<<tutorial;
    cout<<endl;
}
void Exam::display(){
    cout<<"Final Mark: "<<final;
    cout<<endl;
}

inline float total(Student S, Exam E){
    float temp;
    temp = S.tutorial+E.final;
    return temp;
}
int main(){
    Student a;
    Exam b;
    a.getdata();
    b.getdata();
    cout<<endl;
    a.display();
    b.display();

    float t = total(a,b);
    cout<<"total marks is : "<<t;
}