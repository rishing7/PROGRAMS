#include<bits//stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[n];
    for(int i=0; i < n; i++)
        cin>>str[i];
    unordered_map< string, int> map;
    for(int i=0; i<n; i++)
    {
        map[str[i]]++;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        string temp;
        cin>>temp;
        cout<<map[temp]<<endl;
    }
    return 0;
}
