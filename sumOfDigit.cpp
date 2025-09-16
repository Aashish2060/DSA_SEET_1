#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no you want to get reverse";
    cin>>n;
    int sum=0;
    while(n>0){
int rem= n%10;
sum= rem+sum;
n=n/10;
    }
    cout<<"reverse is :"<<sum;
}