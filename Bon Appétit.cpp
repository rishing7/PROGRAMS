#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int cost[n];
    for(int i=0; i<n; i++)
        cin>>cost[i];
    int totalCost = accumulate(cost, cost+n,-cost[k]);
    int split = totalCost/2;
    int bCharged;
    cin>>bCharged;
    if(split == bCharged)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<bCharged-split<<endl;
    return 0;
}
