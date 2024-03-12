#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        float marks;
};

class result : private Student{
    public:
       void getdata();
       void display();
};

void result::getdata(){
    cin>>roll>>marks;
}
void result::display(){
    cout<<roll<<" "<<marks<<endl;
}
int main(){
    result r;
    r.getdata();
    r.display();

    // cout<<r.roll<<
}