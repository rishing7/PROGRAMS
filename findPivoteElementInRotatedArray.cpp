#include<bits/stdc++.h>
using namespace std;
int findPivote(int *arr, int l, int r){
    if(l>r)
        return -1;
    if(l==r)
        return l;
    int mid = (l+r)/2;
    if(l<mid && arr[mid]>arr[mid+1])
        return mid;
    else if(arr[mid]<arr[mid+1])
        findPivote(arr, mid+1, r);
    else
        findPivote(arr,r,mid);

}
int main(){
    int arr[]={5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Pivote Element is: "<<arr[findPivote(arr,0,n)]<<endl;
    return 0;
}
