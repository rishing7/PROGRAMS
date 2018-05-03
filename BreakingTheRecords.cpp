#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int score[n];
    for(int i=0; i<n; i++)
        cin>>score[i];
    int minScore;
    int maxScore;
    unordered_map<int, int> map;
    minScore = score[0];
    maxScore = score[0];
    map[score[0]] = 0;
    int resMax=0;
    int resMin=0;
    for(int i=1; i<n; i++)
        {
            if(minScore>=score[i])
            {
                minScore = score[i];
                if(map.find(score[i])==map.end())
                    resMin++;
            }
            else if(maxScore<=score[i])
            {
                maxScore = score[i];
                if(map.find(score[i])==map.end())
                    resMax++;
            }
            map[score[i]] = i;
        }
    cout<<resMax<<" "<<resMin<<endl;
    return 0;
}
