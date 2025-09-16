#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no";
    cin>>m;
    int n=m;
    int rev=0;
    while(n>0){
        int rem = n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    if(rev==m){
        cout<<"Given no is Palindrome.";
    }
    else{
        cout<<"Given no is not a palindrome";
    }
}