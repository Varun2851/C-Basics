#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a , int b){
    return a>b; // sorting in decreasing order
}
 
int main(){
    int arr[100];
    int n ;
    cin>>n;

    for(int i =0; i<n; i++){
        cin>>arr[i];  //  taking input from the user
    }

    sort(arr,arr+n,compare);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";   // printing the elements 

    }

    return 0;
}
