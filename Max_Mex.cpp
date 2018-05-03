#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int n, k, input;
            cin>>n>>k;
            unordered_map<int, int> map;
            unordered_map<int, int>::iterator itr;
            for(int i=0;i<n;i++)
            {
                cin>>input;
                map.insert(pair<int,int>(input, input));
            }
            /*for(itr = map.begin(); itr!=map.end(); itr++)
            {
                cout<<itr->first<<" => "<<itr->second<<endl;
            }*/
        int temp = -1, key = 0;
        while(temp<k)
        {
            if(map.find(key)==map.end())
            {
                map.insert(pair<int,int>(key, key));
                temp++;
            }
            else
                key++;
        }
        /*for(itr = map.begin(); itr!=map.end(); itr++)
        {
            cout<<itr->first<<" => "<<itr->second<<endl;
        }*/
        cout<<key<<endl;
    }
    return 0;
}
