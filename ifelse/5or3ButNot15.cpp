#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :-";
    cin>>n;
    // if((n%3==0 || n%5==0) && (n%15!=0)){
    //     cout<<"the number is divisible by 5 or 3 and not divisible by 15";
    // }
    // else {
    //     cout<<"Not matching condition";
    // }

    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"the number is divisible by 5 or 3 and not divisible by 15";
        }
        else {
        cout<<"Not matching condition";
        }
    }
    else {
         cout<<"Not matching condition";
     }

}