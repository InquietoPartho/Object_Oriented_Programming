#include<bits/stdc++.h>
using namespace std;
class B;
class A{
        int num1;

        public:
            void getdataA();
            friend void add(A,B);
};

void A::getdataA(){
    cout<<"Enter first number: ";
    cin>>num1;
}

class B{
    int num2;

    public:
        void getdataB();
         friend void add(A,B);
};

void B::getdataB(){
    cout<<"Enter the second number: ";
    cin>>num2;
}
void add(A obj1, B obj2){
    cout<<"The Sum of two number is = "<<obj1.num1+obj2.num2<<endl;

}
int main(){
    A obj1;
    B obj2;

    obj1.getdataA();
    obj2.getdataB();
    add(obj1,obj2);
}