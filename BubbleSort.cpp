#include<bits/stdc++.h>
using namespace std;
void swapEle(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void bubbleSort(int *arr, int n){
    int count=0;
    for(int i=0;i<n;i++){
            int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=1;
                swapEle(&arr[j],&arr[j+1]);
                count++;
            }
        }
        if(flag==0){
            cout<<"\nInner Block executed"<<count<<" times \n"<<"Already sorted\n";
            break;
        }
    }
}
int main(){
    int arr[] = {1,2,5,6,7,8,9,3,4,};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
