#include<bits/stdc++.h>
using namespace std;
int freq(char *string,int size,char ch)
{
    int i=0,result=0;
    while(i<size)
    {
        if(ch==string[i])
            result++;
        i++;
    }
    return result;
}
int main()
{
    char ch[]="aaabbbaaac";
    int n=freq(ch,10,ch[9]);
    cout<<n;
    return 0;
}
