#include<bits/stdc++.h>
using namespace std;
class Student{
        private:
            char name[50];
            int roll;
        public:
            void getdata();
            void show();
};
class student_marks{
    private:
        float math,physics,chem,total,avg;
    public:
        void get_marks();
        void show_marks();
};

class result : public Student, public student_marks{
    public:
        void show_results(){
            cout<<"---------------Results-----------------";
            show();
            show_marks();
        }

};
void Student::getdata(){
    cout<<"Please Enter you name: ";
    cin>>name;
    cout<<"Please Enter your student Id: ";
    cin>>roll;
}

void student_marks::get_marks(){
    cout<<"Enter your marks of Math: ";
    cin>>math;
    cout<<"Enter your marks of Physics: ";
    cin>>physics;
    cout<<"Enter your marks of Chemistry: ";
    cin>>chem;

    total = math+physics+chem;
    avg = total/3;

}
void Student::show(){
    cout<<endl<<endl;
    cout<<"--------------Result Sheet----------------"<<endl;
    cout<<"Your name is: " << name <<endl;
    cout<<"Your student ID is: " << roll <<endl;
}
void student_marks::show_marks(){
    cout<<"Your total Marks is: " << total <<endl;
    cout<<"Average mark is: " << avg <<endl;
    cout<<"-------------------------------------------";
}
int main(){
    result res;
    res.getdata();
    res.get_marks();
    res.show();
    res.show_marks();
    // res.show();
    // res.marks();
}