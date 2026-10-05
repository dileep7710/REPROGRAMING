#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

void change(Cricketer* c){
    // (*c).avg =  77.2;
    c->avg = 68.9;
}

int main(){
    // Cricketer c1("Virat Kohli", 25000, 55.2);
    // cout<<c1.avg<<endl;
    // change(&c1);
    // cout<<c1.avg<<endl;
    // Cricketer c2("Rohit Sharma", 18000, 47.8);

    // Cricketer* p1 = &c1; 
    // cout<<p1->runs<<endl; // c1.runs
    // p1->avg = 77.5;
    // cout<<c1.avg<<endl;

    int x = 4;
    cout<<&x <<endl;
    int* p = &x;
    cout<<p<<endl;
    cout<<*p<<endl;
} 