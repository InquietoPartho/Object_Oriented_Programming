#include<bits/stdc++.h>
using namespace std;

long fact(int n){

    if(n==0) return 1; // base_case

    return(n * fact(n-1));

}
int main(){
   int n;
   cin>>n;\
   cout<<"Factorial of the number is = "<<fact(n)<<endl;

}