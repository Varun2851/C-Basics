#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[] = {4 ,6 ,-10,7,17};
	int n = sizeof(arr)/sizeof(int);
	
	cout<<"Given array is :"<<endl;
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	
	sort(arr,arr+n);
	
	cout<<"Sorted array is :"<<endl;
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}