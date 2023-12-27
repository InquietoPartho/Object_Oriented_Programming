//copyright ©️ urslovelypartho
#include<bits/stdc++.h>
using namespace std;
int pow(int base,int power){
    if(power==0){
        //basecase
        return 1;
    }
    return base* pow(base,power-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"result is = "<<pow(a,b);
}