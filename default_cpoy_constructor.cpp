#include<bits/stdc++.h>
using namespace std;
class test{
        char name[40];
        int roll;
    public:
        void get(){
            cout<<"Please Enter Your Name: ";
            cin.getline(name,40);
            cin.ignore();
            cout<<"Please Enter Your roll Number: ";
            cin>>roll;
        }
        void show(){
            cout<<"Your Name is: " << name<<endl;
            cout<<"And your roll is: " << roll<<endl;
        }
};
int main(){
    test t1;
    t1.get();
    cout<<"-----------First Student Data---------------"<<endl;
    // cout<<endl;
    t1.show();
    cout<<"--------------------------------------------"<<endl;
    test t2;
    t2 = t1;
    cout<<"-----------Second Student Data---------------"<<endl;
    t2.show();
    cout<<"--------------------------------------------"<<endl;
}