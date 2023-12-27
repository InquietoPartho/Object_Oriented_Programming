#include<bits/stdc++.h>
using namespace std;
class test{
    int n;
    public:
    test(){
        cout<<"Constructor is called...."<<endl;
    }
    test(int num){
        n = num;
    }
    void show(){
        cout<<"the value of n is: "<<n<<endl;
    }
};
int main(){
    test t(100),x;
    t.show();
}