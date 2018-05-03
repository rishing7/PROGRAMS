#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, o;
    cin>>n>>o;
    int arr[n];
    memset(arr, 0, n);
    for(int i=0; i<o; i++)
    {
        int a, b, k;
        cin>>a>>b>>k;
        for(int j=a-1; j<b && j<n; j++)
        {
            arr[j] = arr[j]+k;
        }
    }
    int max = *max_element(arr,arr+n);
    cout<<max<<endl;
    return 0;
}
