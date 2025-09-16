#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no you want to cheak prime";
    cin>>n;
    int flag=0;
    if(n<=1){
        cout<<"Not a prime no";

    }
    for(int i=2;i<=n/2;i++){
if(n%i==0){
    flag=1;
}
    }
    if(flag==1){
        cout<<"No is not a prime no";
    }
    if(flag==0){
        cout<<"No is prime";
    }
}