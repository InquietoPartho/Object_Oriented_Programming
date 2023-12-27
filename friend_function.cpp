#include<bits/stdc++.h>
using namespace std;

class friend_function{

    private:
    int private_val;
    protected:
    int protect_val;

    public:
    friend_function(){
        private_val  = 10;
        protect_val = 20;
    }
    friend void display_function(friend_function& val);

};

void display_function(friend_function& val){
    cout<<"Private Data = "<<val.private_val<<endl;
    cout<<"Protected Data = "<<val.protect_val<<endl;
}
int main(){
    friend_function val;
    display_function(val);
}