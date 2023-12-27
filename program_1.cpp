#include<bits/stdc++.h>
using namespace std;
class item{
    int number;
    float cost;

    public:
    void getdata(int a,int b);
    void putdata(void){
        cout<<"Number = "<<number<<endl;
        cout<<"Cost = "<<cost<<endl;
    }
};
void item::getdata(int a,int b){
    number = a;
    cost = b;
}
int main(){
    item x;
    x.getdata(20,3.33);
    x.putdata();
    item y;
    y.getdata(10,45.6);
    y.putdata();
    
}