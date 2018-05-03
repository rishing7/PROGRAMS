#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bar[n];
    for(int i=0; i<n; i++)
        cin>>bar[i];
    int m, d;
    cin>>d>>m;
    int result=0;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<i+m && j<n; j++)
        {
            sum = sum + bar[j];
        }
        if(sum == d)
            result++;
    }
    cout<<result<<endl;
    return 0;
}
