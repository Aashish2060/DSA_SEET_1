#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year you want to check:";
    cin>>year;
    if(year%400==0||(year%4==0&&year%100!=0)){
        cout<<"Leap Year";
    }
    else{ cout<<"Not a leap Year";}
   
}