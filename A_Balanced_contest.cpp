#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int arr[n];
        for(int i=0; i<n; i++)
        cin>>arr[i];
        int cd=0,hd=0,par1,par2;
        if(p%2==0)
        {
            par1 = p/2 ;
        }
        else
        {
            par1 = p/2 + 1;
        }
        if(p%10==0)
            par2 = p/10;
        else
            par2 = p/10 + 1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>=par1)
                cd++;
            if(arr[i]<=par2)
                hd++;
        }
        if(cd==1 && hd==2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
