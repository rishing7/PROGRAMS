#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int num[n];
    for(int i=0; i<n; i++)
        cin>>num[i];
        int result = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((num[i]+num[j])%k == 0)
                result++;
        }
    }
    cout<<result<<endl;
    return 0;
}
