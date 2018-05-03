#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> g1;
    vector<int> :: iterator i;
    for(int i =0; i<5; i++)
        g1.push_back(i);
    for(i = g1.begin(); i!=g1.end(); i++)
        cout<<*i<<" ";
    return 0;
}
