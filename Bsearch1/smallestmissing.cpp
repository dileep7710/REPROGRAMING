#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9,12};
    for(int i=0; i<8; i++){
        if(i!=arr[i]){
            cout<<i;
            break;

        } 
    }
}