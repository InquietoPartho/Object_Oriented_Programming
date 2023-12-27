#include<bits/stdc++.h>
using namespace std;
class Counter{
    private:
        static int count;
    public:
        Counter(){
            count++;
            show();
        }
        void show(){
            system("cls"); // all count in one line :)
            cout<<"The total objects that you have created is: "<<count<<endl;
        }
};

int Counter:: count = 0;
int main(){
    Counter C1,C2,C3,C4,C5;
    
}