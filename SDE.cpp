
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[n][3];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>mat[i][j];
            }
        }
        int res = 0;
        unordered_map<int, int> map;
        unordered_map<int,int>::iterator it;
        for(int i=0; i<3; i++)
        {
            it = map.find(i);
            int min = 0;
            for(int j=0;j<n;j++)
            {
                if( (mat[min][i] > mat[j][i]) &&(it->first != i && it->second != j))
                {
                    min = j;
                    map[i] = j;
                }
                res = res + mat[i][min];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
