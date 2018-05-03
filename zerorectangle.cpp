#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0, result=INT_MIN;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            {
                sum+=arr[i][j];
                if(sum==0)
                {
                    if(((i+1)*(j+1))>result)
                        result = (i+1)*(j+1);
                }
            }
    }
    sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
                sum+=arr[j][i];
                if(sum==0)
                {
                    if(((i+1)*(j+1))>result)
                        result = (i+1)*(j+1);
                }
            }
    }
    cout<<result<<endl;
    return 0;
}
