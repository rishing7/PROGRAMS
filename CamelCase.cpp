#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i=0,result=1;
    while(i<str.length())
    {
        if(str[i]<='Z' && str[i]>='A')
            result++;
        i++;
    }
    cout<<result<<endl;

    return 0;
}
