
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
        cin>>str[i];
    int result =0;
    for(int i=0;i<n-1;i++)
    {
        bool visited[10];
        memset(visited, 0, 10);
        for(int k=0; k<str[i].length(); k++)
        {
            char ch = str[i][k];
            int l = ch - '0';
            if(!visited[l])
            {
                visited[l]  = true;
            }
        }

        for(int j=i+1;j<n;j++)
        {
            bool svisited[10];
            memset(svisited, 0, 10);
            for(int s=0;s<10;s++)
            {
                svisited[s] = visited[s];
            }
            for(int k=0; k<str[j].length(); k++)
            {
                char ch = str[j][k];
                int l = ch - '0';
                if(!svisited[l])
                {
                    svisited[l]  = true;
                }
            }
            int flag=0;
            for(int k=0;k<10;k++)
            {
                if(!svisited[k])
                {
                    flag = 1;
                }
            }
            if(flag==0)
            result++;
        }
    }
    cout<<result<<endl;
    return 0;
}
