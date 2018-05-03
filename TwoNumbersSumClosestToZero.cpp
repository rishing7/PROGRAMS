#include<bits/stdc++.h>
using namespace std;
void f(int *arr, int n){
    int sum=arr[0]+arr[1],index1=0,index2=1;
    for(int i=1; i<n-1; i++){
        if(abs(sum)>abs(arr[i]+arr[i+1])){
            index1 = i;
            index2 = i+1;
            sum=abs(arr[i]+arr[i+1]);
        }
    }
    cout<<arr[index1]<<" "<<arr[index2]<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        f(arr,n);
    }
    return 0;
}
