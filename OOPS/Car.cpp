#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price; 
    int seats;
    string type;

    Car (string c, int p, int t, string k){
        name = c;
        price = p;
        seats = t;
        type = k; 
    }

};
 void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
 } 

int main(){

    Car c1  ("Honda city", 1500000, 5, "sedan");
    // Car c1;
    // c1.name = "Honda City";
    // c1.price = 1500000;
    // c1.seats = 5;
    // c1.type = "sedan";

    // Car c2;
    // c2.name = "Maruti Swift";
    // c2.price = 700000;
    // c2.seats = 5;
    // c2.type = "Hatchback";

    //  Car c3;
    // c3.name = "Toyota Fortuner";
    // c3.price = 3600000;
    // c3.seats = 8;
    // c3.type = "SUV";  

    // print(c1);
    // print(c2);
    // print(c3);

    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<" "<<endl;

}