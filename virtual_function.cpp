#include<bits/stdc++.h>
using namespace std;
class person{
        public:
            virtual void show(){
                cout<<"This is a person class method....."<<endl;
            }
};
class emp : public person{
    public: 
        void show(){
            cout<<"This is a employee class method....."<<endl;
        }
};
class prog : public emp{
    public:
        void show(){
            cout<<"This is a programmer class method....."<<endl;
        }
};
int main(){
    person objp;
    emp obje;
    prog objpr;

    person *ptr;
    ptr = &objp;
    ptr->show();
    ptr = &obje;
    ptr->show();
    ptr = &objpr;
    ptr->show();
    
}