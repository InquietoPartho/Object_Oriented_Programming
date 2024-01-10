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
class child : public parent{

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
    
}