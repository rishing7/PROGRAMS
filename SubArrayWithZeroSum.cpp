#include<bits/stdc++.h>
using namespace std;
void printListWithZeroSum(int *arr,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum = sum+arr[j];
            if(sum==0){
                cout<<"{";
                for(int k=i;k<=j;k++)
                    cout<<arr[k]<<" ";
                    cout<<"}";
                cout<<endl;
                flag=1;
            }
        }
    }
    if(flag==0)
        cout<<"Element Not found with zero sum\n";
}
int main()
{
    cout<<"Enter size of the array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements in array:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    printListWithZeroSum(arr,n);
    return 0;
}
