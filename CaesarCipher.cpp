#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    int k;
    cin>>k;
    for(int i=0; i<n; i++)
    {
        char tp;
        if(arr[i]<='z' && arr[i]>='a')//lower case
        {
            tp = arr[i] + k;
           if(tp>'z')
           {
               arr[i] = 'a' + tp-'z'-1;
               tp = arr[i];
               while(tp>'z')
               {
                    arr[i] = 'a' + tp-'z'-1;
                    tp = arr[i];
               }
           }
           else
            arr[i]=tp;
        }
        else if(arr[i]<='Z' && arr[i]>='A')
        {
            tp = arr[i] + k;
            if(tp>'Z')
           {
               arr[i] = 'A' + tp-'Z'-1;
               tp = arr[i];
               while(tp>'Z')
               {
                    arr[i] = 'A' + tp-'Z'-1;
                    tp = arr[i];
               }
           }
           else
            arr[i]=tp;
        }
    }
    cout<<arr<<endl;
    return 0;
}
