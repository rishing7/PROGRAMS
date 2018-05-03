#include<bits/stdc++.h>
using namespace std;
int freq(char *string1,int size,char ch)
{
    int i=0,result=0;
    while(i<size)
    {
        if(ch==string1[i])
            result++;
        i++;
    }
    return result;
}
int main()
{
    int T,k;
    char string1[1000];
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>string1;
        int n=strlen(string1);
        int temp=n/2,flag=0;
        int j=0;
        while(j<temp)
        {
            if(n%2==1)
                k=temp+1;
            else
                k=temp;
            while(string1[k]!='\0')
            {
                if(string1[j]==string1[k]&&freq(string1,temp,string1[j])==freq(string1+k,n,string1[k]))
                {
                    flag++;
                    break;
                }
                k++;
            }
            j++;
        }
        if(flag==n/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
