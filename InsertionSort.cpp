#include<bits/stdc++.h>
using namespace std;
void swapEle(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void insertionSort(int *arr, int n){
    for(int i=1;i<n;i++){
            int key=arr[i];
            int t=i-1;
            while(t>=0 && key<arr[t]){
                arr[t+1]=arr[t];
                t--;
                }
                arr[j+1]=key;
            }

}
int main(){
    int arr[] = {1,2,5,6,7,8,9,3,4,};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
