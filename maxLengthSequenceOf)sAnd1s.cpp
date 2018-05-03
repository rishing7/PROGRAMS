#include<bits/stdc++.h>
using namespace std;
int f(int *arr, int n)
{
    int count=0;
    int currCount=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            currCount++;
        else
        {
            if(currCount>count)
            {
                count=currCount;
                currCount=0;
            }
        }
    }
    cout<<count<<endl;
    return count;
}
int main()
{
    int arr[]={0,0,1,0,1,1,1,0,1,1};
    int maxCount=0,count=INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=1;
            count=f(arr,10);
            if(count>maxCount)
                maxCount = count;
            arr[i]=0;
        }
    }
    cout<<maxCount<<" ";
    return 0;
}
