#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;
    cin>>s>>t;
    int a, b;
    cin>>a>>b;
    int m, n;
    cin>>m>>n;
    int apple[m], orange[n];
    for(int i=0; i<m; i++)
        cin>>apple[i];
    for(int i=0; i<n; i++)
        cin>>orange[i];
    int countApple=0;
    int countOrange=0;
    for(int i=0; i<m; i++)
    {
        int res = a + apple[i];
        if(res<=t && res>=s)
                countApple++;
    }
    for(int i=0; i<n; i++)
    {
        int res = b + orange[i];
        if(res<=t && res>=s)
                countOrange++;
    }
    cout<<countApple<<endl;
    cout<<countOrange<<endl;

    return 0;
}
