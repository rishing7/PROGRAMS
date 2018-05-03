#include<bits/stdc++.h>
using namespace std;
int findMin(int *arr,int r,int n){
    int min=r;
    for(int i=r+1;i<n;i++){
        if(arr[min]>arr[i])
            min=i;
    }
    return min;
}
void swapEle(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void selectionSort(int *arr, int n){
    for(int i=0;i<n-1;i++){
        int min=findMin(arr,i,n);
        swapEle(&arr[i],&arr[min]);
    }
}
int main(){
    int arr[] = {3,4,6,7,8,9,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
