// #include<iostream>
// using namespace std;
// void gun(){
//     cout<<"Hello CW"<<endl;

// }
// void fun(int n){
//     cout<<"Hello PW"<<endl;
//     fun(n-1);
    
// }

// int main(){ 
//     fun(3);
// }

#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return; // base case
    cout<<n<<endl; // kam
    fun(n-1); //call
}
int main(){
    int n;
    cin>>n;
    fun(n);
}