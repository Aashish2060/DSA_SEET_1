#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    cout<<"Enter two no:";
    cin>>n1>>n2;
    int count=0;
    for(int i=1;i<=n1;i++){
        if(n1%i==0&&n2%i==0){
            count=i;
        }
    }
    cout<<count;
}