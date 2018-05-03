#include<bits/stdc++.h>
using namespace std;
void findPair(int *arr, int n, int sum){
    unordered_map<int, int> map;
    for(int i=0; i<n; i++)
    {
            if(map.find(sum-arr[i])!= map.end())
            {
                cout<<"Element is found at "<<i<<" And "<<map[sum-arr[i]]<<endl;
                return ;
            }
        map[arr[i]] = i;
    }
    cout<<"Not found\n";
    return ;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n, sum;
        cin>>n>>sum;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            findPair(arr, n, sum);
    }
    return 0;
}
