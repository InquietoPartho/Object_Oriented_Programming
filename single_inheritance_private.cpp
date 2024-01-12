#include<bits/stdc++.h>
using namespace std;

class B{
    int a;
    public:
        int b;
        void get_ab(){
            cin>>a>>b;
        }
        int get_a(){
            return a;
        }
        void show(){
            cout<<a<<" "<<b;
        }
};

class D : private B{
    int c;
    public:
        // get_ab();
        void mul(){
            get_ab();
            c = b*get_a();
        }
        void display(){
            cout<<get_a()<<" "<<b<<" "<<c<<endl;
        }
};
int main(){
    D d;
    // d.get_ab();
    d.mul();
    d.display();
}