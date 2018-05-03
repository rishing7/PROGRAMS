#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, string> m;
    m[5] = "rishi";
    m[15] = "kumar";
    m[10] = "Manoj";
    m[25] = "raju";
    unordered_map<int, string>::iterator itr;
    int i=5;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        //cout<<itr->first<<" "<<itr->second<<endl;

        /*if(m.find(i++)!=m.end())
            cout<<"Found"<<endl;
        else
            cout<<"Not Found"<<endl;*/
            cout<<m[i]<<endl;
            i+=5;
    }

    return 0;
}
