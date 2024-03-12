//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;

long fact(int n){
    if(n==0) return 1;
    return (n*fact(n-1));
}
int main(){
   int n;
   cin>>n;
   cout<<"the fact of the number is : " << fact(n)<<endl; 
}