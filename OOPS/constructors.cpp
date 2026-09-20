#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;

    Student (string s, int r){
        name = s;
        rno = r;

    }
};
int main(){
    Student s1("Dileep Yadav", 76);

    s1.gpa = 8.2;

   // Student s2;


    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    //cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
}