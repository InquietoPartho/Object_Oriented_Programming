#include<bits/stdc++.h>
using namespace std;
class test{
    int n;
    public:
    test():n(10){
        cout<<"Constructor is called...."<<endl;
    }
    void show(){
        cout<<"the value of n is: "<<n<<endl;
    }
};
int main(){
    test t;
    t.show();
}