#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int k, a, b, sum;
       cin>>k>>a>>b;
       for(int n=a;n<=b;n++)
       {
            sum = 0;

            for (int i = 1; i <= n; i++)
             {
                sum = (sum%(10^9 + 7) + i%(10^9 + 7))%(10^9 + 7);
                i = (i%(10^9 + 7)*k%(10^9 + 7))%(10^9 + 7);
            }
       }
        cout<<sum<<endl;
    }
    return 0;
}
