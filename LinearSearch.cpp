#include<iostream>
using namespace std;

int main(){

    int arr[100];
    int n;
    cin>>n;
    int i;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Key :"<<endl;
    int key;
    cin>>key;

    for(i =0; i<n; i++){
        if(arr[i] == key){
            cout<<i<<" "<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Key does not exist :";
    }

    return 0;
    
}