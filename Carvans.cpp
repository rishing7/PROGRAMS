#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>> T;
    for(int i = 0 ; i < T ; i++)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int j=0;j<N;j++)
            cin>>arr[j];
        int car=1;
        for(int j=1;j<N;j++)
        {
            if(arr[j-1]>arr[j])
            car++;
            else
            arr[j]=arr[j-1];
        }
        cout<<car<<endl;
    }
    return 0;
}
