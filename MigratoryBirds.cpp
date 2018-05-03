#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fleck[n];
    for(int i=0; i<n; i++)
        cin>>fleck[i];
    unordered_map<int, int> map;
    for(int i=0; i<n; i++)
    {
        map[fleck[i]]++;
    }
    unordered_map<int, int>::iterator itr;
    int result = 1;
    for(int i=2;i<=5;i++)
    {
        if(map[i]>map[result])
            result = i;
    }
    cout<<result<<endl;
    return 0;
}
