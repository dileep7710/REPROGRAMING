#include<iostream>
using namespace std;
#include<climits>
int main(){
    int n;
    cout<<"Enter a size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter a Number : ";

    // input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //output
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max < arr[i]) max = arr[i];
    }
    cout<<max<<endl;

    int smax =  INT_MIN;
    for(int i=0; i<n; i++){
        if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        } 
    }
    cout<<smax;
}