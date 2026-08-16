#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,7,10,11,16,17,19,22};
    int x = 18;
    int n = 11;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid+1];
            break;
        }
        else if(arr[mid]<x)
            lo = mid+1;
        
            else hi = mid-1;
    }
    if(flag==false) cout<<arr[lo];
}