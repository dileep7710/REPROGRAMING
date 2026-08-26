#include<iostream>
using namespace std;
void sumofOdd(int a, int b, int sum){
    if(a>b){
        cout<<sum;
        return; 
    } 
    if(a%2!=0){
        sum += a;
        
    }
    sumofOdd(a+1,b, sum);
    
}
int main(){
    sumofOdd(4,9,0);
}