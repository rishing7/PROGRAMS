#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
        cin>>str[i];
    vector<string> vector;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string temp = str[i] + str[j];
            vector.push_back(temp);
        }
    }
    int result = 0;
    for(int i=0;i<vector.size();i++)
    {
        bool visited[10];
        memset(visited, 0, 10);
        for(int j=0;j<vector[i].length();j++)
        {
            char ch = vector[i][j];
            int l = ch - '0';
            if(!visited[l])
            {
                visited[l]  = true;
            }
        }
        int flag=0;
        for(int k=0;k<10;k++)
        {
            if(!visited[k])
            {
                flag = 1;
            }
        }
        if(flag==0)
        result++;
    }
    cout<<result<<endl;
    return 0;
}
