#include<bits/stdc++.h>
using namespace std;
int findResult(int *arr, int n, int result, int i, int index)
{

    return index;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int result = INT_MIN, index=0, sumP=0,sumS=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i;j>=0;j--)
                sumP = sumP + arr[j];

            for(int j=n-i-1;j>i;j--)
                sumS = sumS + arr[j];

            if(result > sumP + sumS )
            {
                result = sumP + sumS ;
                index = i;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
