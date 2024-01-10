#include<bits/stdc++.h>
using namespace std;
class Parent{

    private:
        // int n1; //Here in public inheritance No private data is accessible
    protected:
        int n1;
        int n2;
    public:
        void show(){
            cout<<"The Value of number 1: " <<n1<<endl;
            cout<<"The value of number 2: " <<n2<<endl;
        }
};

class child : public Parent{
    public:
        void getdata(){
            cout<<"Enter the first value: ";
            cin>>n1;
            cout<<"Enter the second value: ";
            cin>>n2;
        }
};
int main(){
    // Parent p;
    child obj1;
    obj1.getdata();
    obj1.show();
}