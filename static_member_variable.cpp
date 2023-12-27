#include<bits/stdc++.h>
using namespace std;
class sample{
    public:
    static int i;
    sample();//construtor
    inline void display();
};
int sample::i;
sample::sample(){
    i++;
}

inline void sample::display(){
cout<<"Number of object created: "<<i;
}
int main(){
    sample o1,o2,o3,o5,o4;
    o5.display();
}