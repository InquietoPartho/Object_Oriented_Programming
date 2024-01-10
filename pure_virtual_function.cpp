#include<bits/stdc++.h>
using namespace std;
class test{
        public:
            virtual void show() = 0; //pure virtual functions
};
class random : public test{
        public:
            void show(){
                cout<<"Random here....."<<endl;
            }
};
class abc : public random{
        public:
            void show(){
                cout<<"I am abc class....."<<endl;
            }
};
int main(){
    test *ptr[2];
    ptr[0] = new random;
    ptr[1] = new abc;

    ptr[0]->show();
    ptr[1]->show();


}