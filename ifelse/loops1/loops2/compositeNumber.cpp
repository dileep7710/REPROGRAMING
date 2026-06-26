#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :-";
    cin>>n;
    bool flag = true; // true means prime
    for(int i=2; i<=n-1; i++){
        if(n%i==0){   // composite number
           flag = false;
            break;
        }
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    if(flag == true) cout<<"It is prime number";
    else cout<<n<<"-"<<" is Composite number"<<endl;
}