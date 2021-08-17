#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int min1 = arr[0];
    int max1 = arr[0];
    for(int i =0; i<n; i++){
        if(arr[i]<min1){
            min1 = arr[i];
        }
        if(arr[i]>max1){
            max1 = arr[i];
        }
    }
    cout<<"Minimum value is :"<<min1<<endl;
    cout<<"Maximum value is :"<<max1<<endl;
    return 0;
}