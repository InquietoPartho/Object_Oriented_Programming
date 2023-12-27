#include<bits/stdc++.h>
using namespace std;
class test{
    int x;
    public:
        test(){
            cout<<"Constructor is called..."<<endl;
        }
        ~test(){
            cout<<"Destructor is called..."<<endl;
        }
    void obj_create();
};

void obj_create(){
    test t1;
}
int main(){
   obj_create();
}