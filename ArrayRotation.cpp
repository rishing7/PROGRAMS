#include<bits/stdc++.h>
using namespace std;
int *rotateLeft(int *arr, int n,int d){
    int *arr1 = (int *)calloc(d,sizeof(int));
    for(int i=0;i<d;i++)
        arr1[i] = arr[i];
    int j=0;
    for(int i=d;i<n;i++)
        arr[j++] = arr[i];
    int k=0;
    for(int i=n-d;i<n;i++)
        arr[i] = arr1[k++];
    return arr;
}
int main(){
    cout<<"Enter Array Size: ";
    int n;
    cin>>n;
    cout<<"Enter number to rotate Left the array: ";
    int d;
    cin>>d;
    int *arr = (int*)malloc(n*(sizeof(int)));
    cout<<"Enter Elements into array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        rotateLeft(arr,n,d);
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
