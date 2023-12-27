#include<bits/stdc++.h>
using namespace std;
void TOH(int n,int src,int aux,int dest){
    if(n==1){
        cout<<"Move disk- "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    TOH(n-1,src,dest,aux);
    cout<<"Move disk- "<<n<<" from "<<src<<" to "<<dest<<endl;
    TOH(n-1,src,aux,dest);
}
int main(){
    int n;
    cout<<"Please enter the number of Disk: ";
    cin>>n;
    TOH(n,1,2,3);
}