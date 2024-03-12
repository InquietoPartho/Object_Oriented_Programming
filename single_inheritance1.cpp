#include<bits/stdc++.h>
using namespace std;
class Student{
        protected:
         long SID;
        public:
        void getroll();
};
void Student::getroll(){
    cout<<"Please Enter your Student ID: ";
    cin>>SID;
}

class result:public Student{
    private:
    float marks;
    public:
    void getmarks();
    void display();
};

void result::getmarks(){
    cout<<"Please Enter Your marks: ";
    cin>>marks;
}
void result::display(){
    getroll();
    getmarks();

    cout<<"Your roll and result is: "<<SID<<" "<<marks<<endl;
}
int main(){
    
    result r;
    r.display();
}