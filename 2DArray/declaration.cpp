#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {12, 10, 4, 8, 99, 35,55, 44,22};
    // rows -> 3  0-2
    //columns -> 3  0-2
    // arr[0][0] = 4;
    // cout<<arr[0][0];
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            cout<<arr[i][j]<<" ";
        }
    }

}