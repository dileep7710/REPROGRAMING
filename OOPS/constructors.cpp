#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;

    Student(){ // Default Constructor

    }

    // constructors
    Student (string s, int r){ // parameterised constructor  
        name = s;
        rno = r;
    }

     Student (string s, int r, float g){ // parameterised constructor  
        name = s;
        rno = r;
        gpa = g;
    }


};
int main(){
    Student s1("Dileep Yadav", 76);
    s1.gpa = 6.2;

    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 8.2;

    Student s3("Anant", 13, 7.2);

    Student s6 = s1;


    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.rno<<endl;
     cout<<s6.name<<" "<<s6.gpa<<" "<<s6.rno<<endl;
}