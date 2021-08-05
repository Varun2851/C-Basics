#include<iostream>
using namespace std;
void freq(int arr[],int n){
    for(int i =0; i<n; i++){
        bool flag = false;
        for(int j = 0 ; j<i; j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == true){
            continue;
        }
        int freq1 = 1;
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                freq1++;
            }
        }
        cout<<arr[i]<<" "<<freq1<<endl;
    }
}

int main(){

    int arr[] = {10,10,10,30,30,70,60,60};
    int n = sizeof(arr)/sizeof(int);

    freq(arr , n);

    return 0;
}