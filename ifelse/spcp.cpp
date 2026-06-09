#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"Enter a selling price ";
    cin>>sp;

    int cp;
    cout<<"Enter a cost price ";
    cin>>cp;

    if(sp>cp){
        cout<<"profit";
    }

    if(cp>sp){
        cout<<"Loss";
    }

    if(sp==cp){
        cout<<"No profit, No Loss";
    }

}