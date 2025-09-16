#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no which table you want";
    cin>>n;
    for(int i =1;i<=10;i++){
        cout<<n<<"X"<<i<<"="<<i*n;
        cout<<endl;
    }

}