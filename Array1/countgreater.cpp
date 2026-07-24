#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter a number: ";

    // input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // output

    int x;
    cout<<"target number :";
    cin>>x;

int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}