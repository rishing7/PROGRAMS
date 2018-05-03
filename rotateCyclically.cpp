#include<bits/stdc++.h>
using namespace std;
int *rotateCyclically(int *arr, int n){
	int x = arr[n-1];
	for(int i=n-1;i>=1;i--){
		arr[i] = arr[i-1];
	}
	arr[0] = x;
	return arr;
}
int main(){
	cout<<"Enter Size of the array: ";
	int n;
	cin>>n;
	int *arr = (int *)malloc(n*(sizeof(int)));
	cout<<"Enter the elements into the array: ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	rotateCyclically(arr,n);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
