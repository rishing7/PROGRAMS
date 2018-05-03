#include<bits/stdc++.h>
using namespace std;
bool checkCircular(string str){
    int x=0,y=0;
    char dir = 'N';
    for(int i=0;i<str.length();i++){
        switch(str[i]){
        case 'M':
            if(dir=='N')
                y++;
            else if(dir=='S')
                y--;
            else if(dir=='E')
                x++;
            else if(dir=='W')
                x--;
            break;
        case 'R':
            if(dir=='N')
                dir='E';
            else if(dir=='S')
                dir='W';
            else if(dir=='E')
                dir='S';
            else if(dir=='W')
                dir='N';
            break;
        case 'L':
            if(dir=='N')
                dir='W';
            else if(dir=='S')
                dir='E';
            else if(dir=='E')
                dir='N';
            else if(dir=='W')
                dir='S';
            break;
        }
    }
    return (!x && !y);
}
int main(){
    string str;
    int T;
    cin>>T;
    while(T--){
    cin>>str;
    if(checkCircular(str))
        cout<<"Given String is circular move";
    else
        cout<<"Given String is not circular move";
    }
    return 0;
}
