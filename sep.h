#include<bits/stdc++.h>
using namespace std;
class test{
    int n;

    public:
        test(){
            cout<<"Constructor is called..."<<endl;
        }

        void setVal(int num){
            n = num;
        }
        int getVal(){
            return n;
        }
};