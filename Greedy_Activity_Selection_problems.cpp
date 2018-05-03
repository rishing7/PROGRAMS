#include<bits/stdc++.h>
using namespace std;
struct Activity{
    int start,finish;
};
bool activityCompare(Activity s1, Activity s2)
{
    return s1.finish < s2.finish;
}
void printMaxActivity(Activity *arr, int n)
{
    sort(arr, arr+n);
    int i=0;
    cout<<"( "<<arr[i].start<<","<<arr[i].finish<<" )"<<endl;
    for(int j = 1; j<n; j++)
    {
        if(arr[j].start >= arr[j].finish)
        {
            i=j;
            cout<<"( "<<arr[i].start<<","<<arr[i].finish<<" )"<<endl;
        }
    }
    return ;
}
int main()
{
    Activity arr[]  =   { {5, 9},{1, 2},{3, 4},{0, 6},{5, 7},{8, 9} };
    int n = sizeof(arr)/sizeof(arr[0]);
    printMaxActivity(arr, n);
    return 0;
}
