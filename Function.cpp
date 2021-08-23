#include<iostream>
using namespace std;

void IsEven(int n){
    if(n%2 == 0){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    IsEven(n); // function calling 

    return 0;
}