#include<bits/stdc++.h>
using namespace std;
bool isConsecutive(int *arr, int i, int j, int maxVal, int minVal)
{
    if(maxVal-minVal != j-i)
        return false;
    vector<bool> v(j-i+1);
    for(int k=i; k<=j;k++)
    {
        if(v[arr[k]-minVal])
            return false;
        v[arr[k]-minVal]=true;
    }
    return true;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int maxVal, minVal;
        int len=1;
        int start=0, end=0;
        for(int i=0; i<n-1;i++)
        {
            maxVal = arr[i];
            minVal = arr[i];
            for(int j=i+1; j<n; j++)
            {
                maxVal = max(maxVal, arr[j]);
                minVal = min(minVal, arr[j]);
                if(isConsecutive(arr, i, j, maxVal, minVal))
                {
                    if(len<maxVal-minVal+1)
                    {
                        len = maxVal-minVal+1;
                        start = i;
                        end = j;
                    }
                }
            }
        }
        cout<<"{ ";
        for(int i=start; i<=end; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"}";

    }
    return 0;
}
