#include<bits/stdc++.h>
using namespace std;
class test{
        protected:
            int roll;
        public:
            void get_number(int);
            void put_number();
};
void test::get_number(int a){
    roll = a;
}
void test::put_number(){
    cout<<"Roll Number: "<<roll<<endl;
}
class random : public test{
    protected:
        float sub1;
        float sub2;
    public:
        void getmarks(float,float);
        void put_marks(void);
};

void random::getmarks(float a,float b){
    sub1  = a;
    sub2 = b;
}
void random::put_marks(){
    cout<<"Sub1: "<< sub1<<" "<<" Sub2: "<< sub2<<endl;
}

class result : public random{
    float total;
    public:
        void display();
};

void result :: display(){
    total = sub1+sub2;
    put_number();
    put_marks();
    cout<<"Total marks: "<<total;
}
int main(){
    result r;
    r.get_number(1);
    r.getmarks(100,99);
    r.display();
}