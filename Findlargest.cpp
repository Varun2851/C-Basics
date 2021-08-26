#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,3,4,6,18,9};
    int n = sizeof(arr)/sizeof(int);

    int largest = INT_MIN;

    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element is :"<<largest<<endl;

    return 0;
}