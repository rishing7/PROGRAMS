#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        int G;
        cin>>G;
        for(int j=0;j<G;j++)
        {
            int I,N,Q,sum=0;
            cin>>I>>N>>Q;
            int arr[N];
            for(int l=0;l<N;l++)
                arr[l]=I;
            for(int k=1;k<=N;k++)
            {
                for(int m=0;m<k;m++)
                {
                    if(arr[m]==1)
                    arr[m]=2;
                else if(arr[m]==2)
                    arr[m]=1;
                }
            }
            for(int l=0;l<N;l++)
            {
                if(arr[l]==Q)
                    sum++;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
