#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no you want factorial";
    cin>>n;
    unsigned long long fact=1;
    while(n>=1){
fact=fact*n;
n--;
    }
    cout<<"fact is :"<<fact;
}