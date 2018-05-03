#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin>>s;
    while(s--){
            int n;
            cin>>n;
            int h[n];
            int flag = 1;
            for(int i=0;i<n;i++){
             cin>>h[i];
            }
            if(n%2 == 1 && h[0] == 1){
                int l = 0;
                int r = n-1;
                while(l < r){
                    if(h[l]==h[r] && h[l+1]-h[l] == 1 && h[r-1]-h[r] == 1)
                        flag = 0;
                    else
                        flag = 1;
                    l++;
                    r--;
                }
            }
            if(flag == 0)
                cout<<"yes\n";
            else
                cout<<"no\n";
    }
    return 0;
}
