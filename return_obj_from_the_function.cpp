#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        int marks1,marks2;
};
student createstudent(){
    student s;
    s.marks1 = 50;
    s.marks2 = 99;

    cout<<" Marks 1 = " << s.marks1 <<" and "<<" Marks 2 = " <<s.marks2<<endl;

    return s;
}
int main(){
    student s3;
    s3 = createstudent();
}