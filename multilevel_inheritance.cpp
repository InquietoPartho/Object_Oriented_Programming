#include<bits/stdc++.h>
using namespace std;
class person{
        char name[50];
        int age;
    public:
        void getdata(){
            cout<<"Please Enter your name: ";
            cin>>name;
            cout<<"Please Enter your age: ";
            cin>>age;
        }
        void show(){
            cout<<"Your name is : " << name <<endl;
            cout<<"Your age is : " << age <<endl;
        }
};

class emp : public person{
    private:
        float sal;
    public:
        void getdata(){
            person::getdata();
            cout<<"Please Enter your Salary: ";
            cin>>sal;
        }
        void show(){
            person::show();
            cout<<"Your Salary is " << sal << "BDT" <<endl;
        }
};

class prog : public emp{
    int n;
    public:
        void getdata(){
            emp::getdata();
            cout<<"How many programming language do you know? "<<endl;
            cin>>n;
        }
        void show(){
            emp::show();
            cout<<"You Know " << n << " programming language"<<endl;
            
        }
};
int main(){
    
    prog obj;
    cout<<"-------------------Please Enter your Valid Informations-------------------"<<endl;
    obj.getdata();
    cout<<"-------------------Checking your Informations-----------------------------"<<endl;
    cout<<endl;
    cout<<"-------------------Accessing your Infromations-----------------------------"<<endl;
    obj.show();
    cout<<"-------------------Thanks for your Patience--------------------------------"<<endl;

}