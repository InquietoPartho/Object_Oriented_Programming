#include<bits/stdc++.h>
using namespace std;
class Student{
    int id;
    public:
        Student(){
            cout<<"Default Constructor"<<endl;
        }
        Student(int a){
            id = a;
        }
        Student(Student &x){
            id = x.id;
        }
        void display(void){
            cout<<id;
        }
};
int main(){
   Student a(100);
   Student b(a);
   Student c = a;
   Student d;
   d = a;

   cout<<"Id of A: ";
   a.display();
   cout<<"Id of B: ";
   b.display();
   cout<<"Id of C: ";
   c.display();

}