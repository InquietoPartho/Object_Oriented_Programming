//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    cout<<a<<" "<<b;
}
int main(){
   int a = 200;
   int b = 100;
   swap(a,b);
}