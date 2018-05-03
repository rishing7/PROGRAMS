#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            int res=1,rem=0;
            for(int i=0;i<n;i++)
            {
                res = res*arr[i];
            }
        cout<<rem<<endl;
    }
    return 0;
}
