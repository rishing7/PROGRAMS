#include<bits/stdc++.h>
using namespace std;
void findPair(int *arr, int n, int sum)
{
    unordered_map<int, int> map;
    for(int i=0;i<n;i++)
    {
        if(map.find(sum-arr[i])!=map.end())
        {
            cout<<"Found at location"<<map[sum-arr[i]<<" And "<<i<<endl;
        }
        map[arr[i]]=i;
    }
    unordered_map<int, int>::iterator it;
    for(map<int, int>::iterator it=map.begin();it!=map.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Not Found"<<endl;
}
int main()
{
    int arr[]={4,6,9,3,2,4,8,6,2,7};
    findPair(arr,10,12);
}
