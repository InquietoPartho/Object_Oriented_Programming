#include<bits/stdc++.h>
using namespace std;
class person{
        public:
            virtual void show(){
                cout<<"This is person calling......"<<endl;
            }
};
class emp : public person{
        public:
            void show(){
                cout<<"This is employee calling......"<<endl;
            }
};
class prog : public emp{
        public:
            void show(){
                cout<<"This is programmer calling......"<<endl;
            }
};
int main(){
    int n;
    cout<<"Please enter the length: ";
    cin>>n;
    person *ptr[n];
    cout<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<endl;
    cout<<"Enter the choice: \n1.Person Class\n2.Employee Class\n3.Programmer Class";
    cout<<endl;
    int opt;
    for(int i = 0;i<n;i++){
        cout<<"which objects do you want to create: ";
        cin>>opt;
        if(opt==1){
            ptr[i] = new person;
        }
        else if(opt==2){
            ptr[i] = new emp;
        }
        // else if(opt==3){
        //     ptr[i] = new prog;
        // }
        else{
            ptr[i] = new prog;
        }

    }
    for(int i=0;i<n;i++){
        ptr[i]->show();
    }
}