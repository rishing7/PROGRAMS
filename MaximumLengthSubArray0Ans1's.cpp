#include<bits/stdc++.h>
using namespace std;
void findSubArray(int *arr, int n)
{
    int length=-1;
    int count1=0;
    int count0=0;
    int initialIndex=0;
    int lastIndex=n;
    for(int i=0;i<n;i++)
    {
            count0=0,count1=0;
        for(int j=i;j<n;j++)
        {
            arr[i]==0?count0++:count1++;
        if(count0==count1)
        {
            if(length<j-i+1)
            {
                initialIndex=i;
                lastIndex=j;
                length=j-i+1;
            }
        }
        }
    }
    for(int k=initialIndex;k<=lastIndex;k++)
        cout<<arr[k]<<" ";
}
int main()
{
    int arr[]={0,0,1,0,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    findSubArray(arr,n);
    return 0;
}
