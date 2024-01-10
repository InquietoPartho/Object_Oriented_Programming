//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;

int main(){
   int a,b,q;

   try{
    cout<<"Please Enter the value of a: ";
    cin>>a;
    cout<<"Please Enter the value of b: ";
    cin>>b;

    if(b==0){
        throw 0;
    }
    q = a/b;
    cout<<"The ans is: " << q <<endl;
   } 
   catch(int){
        cout<<"cannot divide by ZERO"<<endl;
   }
}