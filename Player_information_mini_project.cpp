//Simple Mini Project about Player Squad using the concept of OOP by Pijush Kanti
#include<bits/stdc++.h>
using namespace std;
class player{
    int age;
    char name[50];
    char team[50];

    public:
        player(){
            cout<<"Please Enter Player Name: ";
            cin.getline(name,50);
            cout<<"Please Enter Player Team Name: ";
            cin.getline(team,50);
            cout<<"Please Enter Player Age: ";
            cin>>age;
        }
        void input(){
            cout<<"Please Enter Player Name: ";
            cin>>name;
            cout<<"Please Enter Player Team Name: ";
            cin>>team;
            cout<<"Please Enter Player Age: ";
            cin>>age;
        }
        void change(char nm[50], char tm[50],int a){
            strcpy(name,nm);
            strcpy(team,tm);
            age = a;
        }
        void display(){
            cout<<"Player Name is: "<<name<<endl;
            cout<<"Team name of the Player is: "<<team<<endl;
            cout<<"The Age of the Player is: "<<age<<endl;
        }
};
int main(){
    int opt;
    player p;
    do{
        cout<<"--------Main Menu--------"<<endl;
        cout<<"Option 1: Input Player Data"<<endl;
        cout<<"Option 2: Display Player Data"<<endl;
        cout<<"Option 3: Change player Data"<<endl;
        cout<<"Option 4: Exit"<<endl;
        cout<<"-------------------------";
        cout<<endl;
        cout<<"Please Enter Any Option: ";
        cin>>opt;

        switch(opt){
            case 1:
                p.input();
                break;
            case 2:
                p.display();
                break;
            case 3: 
                p.change("Partho","ABC",19);
                break;
            case 4: 
                return 1;
                break;
            default:
                cout<<"Opps! :( Looks like You have  Entered an Wrong Option! Please Enter a valid option. Thanks :)";

        }

    }while(1);

}