#include<bits/stdc++.h>
using namespace std;
class test{
        int n;
        float average;

        public:
            test(){
                cout<<"Constructors are called...."<<endl;
            }
            test(int num){
                n = num;
                cout<<"The value of n is: "<<n<<endl;
            }
            test(float avg, int number){
                average = avg;
                n = number;
                cout<<"The average is = "<< avg << " and the number is = "<< number<<endl;
            }
};
int main(){
    test t,t1(10),t2(3.54,2202139);
}