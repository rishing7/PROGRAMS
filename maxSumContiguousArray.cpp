#include<bits/stdc++.h>
using namespace std;
void maxSumContiguousArray(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+arr[i];
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum = currSum+arr[j];
            if(currSum>=sum)
                sum=currSum;
            break;
        }
    }
    cout<<"Max sum: "<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr = (int *)malloc(n*sizeof(int));
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        maxSumContiguousArray(arr,n);
    return 0;
}
