#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int A[n], B[m];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>B[i];
    }
    int maxA = *max_element(A, A+n);
    int minB = *min_element(B, B+m);
    int res = 0, flagA, flagB;
    for(int i = maxA ; i<=minB; i++)
    {
        flagA=0;
        for(int j = 0;j< n; j++)
        {
            if(i%A[j]==0)
                flagA++;
        }
        flagB = 0;
        if(flagA==n)
        {
            for(int j = 0; j<m; j++)
            {
                if(B[j]%i==0)
                    flagB++;
            }
        }
        if(flagB==m)
            res++;
    }
    cout<<res<<endl;
    return 0;
}
