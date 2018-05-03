#include<bits/stdc++.h>
using namespace std;
void print(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void inPlaceMerge(int *X, int *Y,int x, int y)
{
    for(int i=0; i<x; i++)
    {
        if(X[i]>Y[0])
        {
            swap(X[i],Y[0]);
        }
        for(int j=0;j<y-1;j++)
        {
            if(Y[j]>Y[j+1])
            {
                swap(Y[j],Y[j+1]);
            }
        }
    }
}
int main()
{
    int X[] = {1,4,7,8,10};
    int Y[] = {2,3,9};
    inPlaceMerge(X,Y,5,3);
    print(X, 5);
    print(Y, 3);
    return 0;
}
