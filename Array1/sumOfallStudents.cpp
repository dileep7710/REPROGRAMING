#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter a Number : ";

    //input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // output
    int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    
    }
     cout<<sum;
}