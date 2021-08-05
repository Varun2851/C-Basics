#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(int);
	
	int sum ;
	cin>>sum;
	int l;
	int r;
	l = 0;
	r = n-1; // for two pointer array should be sorted
	
	while(l < r){
		if(arr[l]+arr[r] == sum){
			cout<<"1"<<endl;
			break;
		}
		else if(arr[l]+arr[r]<sum){
			l++;
		}
		else {
			r--;
		}	
 	
	}
 	
    cout<<"0"<<endl;
	return 0;
}