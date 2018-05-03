#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i = 0;
    int r = str.length()-1;
    while(i<=r)
    {
        char ch = str[i];
        str[i] = str[r];
        str[r] = ch;
        i++;
        r--;
    }
    cout<<str<<endl;
    return 0;
}
