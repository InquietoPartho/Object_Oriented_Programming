#include<bits/stdc++.h>
using namespace std;
class student{
    int sid;
    double cgpa;
    public:
    ~student(){
        cout<<"release resources"<<endl;
    }
    void display(){
        cout<<sid<<endl<<cgpa<<endl;
    }
    student(int a,double b){
        sid = a;
        cgpa = b;
    }

};
int main(){
    student ST(2202139,3.88);
    ST.display();
    return 0;
}