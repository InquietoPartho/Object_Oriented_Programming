#include<bits/stdc++.h>
using namespace std;
class item{
    string name;
    int SID;

    public:
    void getdata(string nm,int id);
    void putdata(void){
        cout<<name<< " "<<SID<<endl;
    }
};

inline void item:: getdata(string nm,int id){
    name = nm;
    SID = id;
}
int main(){
    item x;
    x.getdata("Partho",2202139);
    x.putdata();
    

}