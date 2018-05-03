#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    int count = 0;
    for(int i=0; i<n; i++)
        if(max==arr[i])
            count++;
    cout<<count<<endl;
    return 0;
}

