#include<bits/stdc++.h>
using namespace std;
int main(){
    short T;
    cin>>T;
    while(T--){
            int n,q;
            cin>>n>>q;
            int len[n];
            for(int i=0;i<n;i++){
                cin>>len[i];
            }
            for(int i=0;i<q;i++){
                int k;
                cin>>k;
                int count = 0;
                for(int j=0; j<n;j++){
                    if(k-len[j] <= 1){
                        count++;
                    }
                }
                cout<<count<<endl;
            }
    }
    return 0;
}
