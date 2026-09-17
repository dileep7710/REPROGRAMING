#include<iostream>
using namespace std;
class Student{ // Student is a new data type
public: 
    string name;  
    int rno;
    float gpa;
};

int main(){
    Student s1;
    s1.name = "Dileep Yadav";
    s1.rno = 76;
    s1.gpa = 7.2;

    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 6.5;

    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<" "<<endl;
   cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<" "<<endl;

    
}