#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no";
    cin>>n;
    int even=0;
    int odd=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
         even=even+i;
        }
       if(i%2!=0){
        odd=odd+i;
       }

        }
        cout<<"Sum of even no is:"<<even;
        cout<<"Sum of odd no is:"<<odd;
    }
