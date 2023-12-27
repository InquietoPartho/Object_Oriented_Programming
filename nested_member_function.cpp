#include <iostream>
using namespace std;

class Set {
    int m,n;
public :
    void input ();
    void display ();
    int largest ();
};

int Set::largest () {
    if (m>=n)
        return (m);
    else
        return (n);
}

void Set::input () {
    std::cout <<"input values of m and n"<<"\n";
    std::cin>>m>>n;
}

void Set::display () {
    std::cout <<"largest value=" <<largest () << "\n"; // calling the member function
}

int main () {
    Set s;
    s.input ();
    s.display ();
}
