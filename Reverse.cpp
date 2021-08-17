#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number that you want to reverse :"<<endl;
    cin>>n;
    int ans = 0;
    // for(; n!=0; n=n/10){
    //     ans = ans*10+n%10;
    // }
    // cout<<ans<<endl;

    while(n){
        ans = ans*10+n%10;
        n = n/10;
    }

    cout<<ans<<endl;

    return 0;
}