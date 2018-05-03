#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,n;
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        cin>>n;
        int arr[n];

        for(int j=0;j<n;j++)
            cin>>arr[j];
        sort(arr,arr+n);

        int min = arr[1] - arr[0];
        for(int i=2;i<n;i++)
        {
            int temp = arr[i] - arr[i-1];
            if(temp<min)
                min = temp;
        }
        cout<<min<<endl;
    }
	return 0;
}
