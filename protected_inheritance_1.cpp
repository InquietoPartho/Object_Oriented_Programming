#include<bits/stdc++.h>
using namespace std;
class parent{
        
        private:
         
        protected:
           int a;
            int b;
        public:
            int c;
};
class child : protected parent{

    public:
        void getdata(){
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<"Enter the value of b: ";
            cin>>b;
            cout<<"Enter the value of c: ";
            cin>>c;
        }
        void display(){
            cout<<"The value of a,b and c is: "<< a << b << c<<endl;
        }
};
int main(){

    child ch;
    ch.getdata();
    ch.display();
    // cout<<"Enter the value of c: ";
    // cin>>ch.c; //we will get error here because if we inherit the child class WRT private, then the 
    // data members become the private data according to parents class, though we can use them into
    // the derived class but cannot access outside the base and derived class
    
}