#include<bits/stdc++.h>
using namespace std;
char report[500];
int main(){
    int R;
    cin>>R;
    while(R--){
        int flag = -1;
        int L;
        cin>>L;
        cin>>report;
        char prev = report[0];
        for(int i = 1; i<L; i++){
                if(report[i] == '.'){
                    flag = -1;
                    continue;
                }
                if((prev == report[i])|| (prev == 'T')){
                        flag = 1;
                        break;
                }
                if(prev == 'H' && report[i] == 'T'){
                    prev = '.';
                    flag = 0;
                }
                else
                    prev = report[i];
        }
        if(flag == -1){
            if(prev != '.')
                flag = 1;
            else
                flag = 0;
        }
        if(flag == 0 )
            cout<<"Valid\n";
        else
            cout<<"Invalid\n";
    }
    return 0;
}
