// #include<bits/stdc++.h>
// using namespace std;
// class B{
//         int a;
//         public:
//             int b;
//             void set_ab();
//             int get_a(void);
//             void show_a(void);
// };

// class D : public B{
//     int c;
//     public:
//         void mul(void);
//         void display(void);
// };

// void B :: set_ab(){
//     cout<<"Enter the value of a and b: ";
//     cin>>a>>b;
// }
// int B :: get_a(){
//     return a;
// }
// void D::mul(){
//     c = b*get_a();
// }
// void D::display(){
//     cout<<get_a()<<" "<<b<<" "<<c<<endl;
// }
// int main(){

//     D d;
//     d.set_ab();
//     d.mul();
//     d.display();

//     d.b = 20;
//     d.mul();
//     d.display();
    
// }

#include<bits/stdc++.h>
using namespace std;

class B{
    int a;

    public:
        int b;
        void get_ab(){
            cout<<"Enter the value of a and b: ";
            cin>>a>>b;
        }
        int get_a(){
            return a;
        }
        void show(){
            cout<<a<<" "<<b<<endl;
        }
};
class D : public B{
    int c;
    public:
        void mul(){
            // get_ab();
            // get_a();
            c = b*get_a();
        }
        void display(){
            cout<<get_a()<<" "<<b<<" "<<c<<endl;
        }
};
int main(){
    D d;
    d.get_ab();
    d.mul();
    d.display();

    d.b = 20;
    d.mul();
    d.display();
}