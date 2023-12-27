// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int SID;
//     string dept;
//     void getdata();
//     void display();
// };
// void Student::getdata(){
//     cout<<"Please Enter Your Name: ";
//     cin>>name;
//     cout<<"Please Enter Your Student ID: "<<endl;
//     cin>>SID;
//     cout<<"Please enter your dept"<<endl;
//     cin>>dept;
// }
// void Student::display(){
//     cout<<"Name is "<<name<<endl;
//     cout<<"Student Id is "<<SID<<endl;
//     cout<<"Department is "<<dept<<endl;
// }
// int main(){
//     Student s;
//     s.getdata();
//     s.display();
// }
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int sid;
};
int main(){
    Student s;
    cin>>s.name>>s.sid;

    cout<<s.name<<" "<<s.sid<<endl;
    
}