#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int w;
            string s;
            cin>>w>>s;
            int index;
            if(s=="mon")
                index = 0;
            else if(s=="tues")
                index=1;
            else if(s=="wed")
                index=2;
            else if(s=="thurs")
                index=3;
            else if(s=="fri")
                index=4;
            else if(s=="sat")
                index=5;
            else
                index=6;
            int arr[7];
            for(int i=0;i<7;i++)
                arr[i]=0;
            int count=1;
            int temp=0;
            while(count<=w && temp<7)
            {
                if(count==1 && temp==index)
                {
                    for(int i=count;i<=w;i=i+7)
                    {
                        arr[index]++;
                    }
                }
                else
                {

                    for(int i=count;i<=w;i=i+7)
                    {
                        arr[temp]++;
                    }
                }
                count++, temp++;
            }
                for(int i=0;i<7;i++)
                    cout<<arr[i]<<" ";
                    cout<<endl;
    }
    return 0;
}
