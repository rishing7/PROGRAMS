#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
    string s;
    cin>>s;
    unordered_map<char, int> map;
    for(int i=0; i<s.length(); i++)
        map[s[i]]++;
    unordered_map<char, int> ::iterator it;
    int arr[map.size()], i=0;
    for(it = map.begin(); it!=map.end(); it++)
    {
        arr[i] = it->second ;
        //cout<<arr[i]<<" ";
        i++;
    }
    int flagMin = 0, flagMax = 0;
    int max = *max_element(arr, arr+i);
    int min = *min_element(arr, arr+i);
    //cout<<max<<" "<<min<<endl;
    if(max-min>1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(max-min==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            for(int j = 0; j<i; j++)
            {
                if(arr[j]==max)
                    flagMax++;
                else
                    flagMin++;
            }
            if((flagMax == 1 ) || (flagMin == 1))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    }return 0;
}
