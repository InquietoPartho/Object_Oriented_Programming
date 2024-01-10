#include<bits/stdc++.h>
using namespace std;
class parent{
    public:
        void show(){
            cout<<"This is parent show method............."<<endl;
        }
        
};
class child : public parent{
    public:
        void show(){
            // parent::show();
            cout<<"This is child show method............"<<endl;
        }
};
int main(){
    child c;
    c.parent::show();
    c.show();
}