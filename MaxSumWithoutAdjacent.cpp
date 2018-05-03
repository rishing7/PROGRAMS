#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int i=0;
        int j=1;
        int sum1=0;
        int sum2=0;
        while(i<n || j<n){
            sum1 = sum1 + arr[i];
            sum2 = sum2 + arr[j];
            i=i+2;
            j=j+2;
        }
        if(sum1>sum2)
            cout<<sum1<<endl;
        else
            cout<<sum2<<endl;
    }
    return 0;
}
