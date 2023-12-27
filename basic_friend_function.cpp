// #include<bits/stdc++.h>
// using namespace std;
// class sum{
//     int a,b;
//     void getdata();
//     public:
//     void display();
//     friend float mean(sum s);
// };

// void sum::getdata(){
//     cout<<"Please enter two value: ";
//     cin>>a>>b;
// }
// inline float mean(sum s){
//     int tmp;
//     tmp = s.a+s.b;
//     cout<< tmp;
// }
// // void sum::display(){
// //     getdata();
// //     cout<<"the sum is : "<<mean();
// // }
// int main(){
//     sum s;
//     // s.getdata();
//     s.display();
// }
#include<bits/stdc++.h>
using namespace std;

class sum{
    int num;

    public:
        void getdata(){
            cout<<"Please enter two number: ";
            cin>>num;
        }
        friend int Sum(sum n1,sum n2){
            return n1.num+n2.num;
        }
};
int main(){
    sum x;
    sum y;

    x.getdata();
    y.getdata();
    int total = Sum(x,y);

    cout<<total<<endl;
}