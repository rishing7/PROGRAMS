#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t, res = 0;
    t=n;
    while(t)
    {
        int k= t%10;
        res = res + k*k*k;
        t = t/10;
    }
    if(res==n)
        cout<<"Armstrong\n";
    else
        cout<<"Not Armstrong\n";
    return 0;
}
