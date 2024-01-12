#include<bits/stdc++.h>
using namespace std;
class test{
        int sid;
        double cpa;

        public:
            ~test(){
                cout<<"Destructors call.....";
            }
            void display(){
                cout<<sid<<" "<<cpa<<endl;
    
            }
            test(int roll,double cpas){
                sid = roll;
                cpa =cpas; 
            }
};
int main(){
    test t(2202139,3.50);
    t.display();
}