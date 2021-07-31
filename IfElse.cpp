#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of x"<<endl;
    int x;
    cin>>x;
    if(x==1){
        cout<<"First Year";
    }
    else if(x==2){
        cout<<"Second Year";
    }
    else if(x==3){
        cout<<"Third Year";
    }
    else {
        cout<<"Fourth Year";
    }

    return 0;

}