#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    rotate(str.begin(), str.begin()+2, str.end());
    cout<<str.length()<<endl;
    cout<<str.substr(0,4);

    return 0;
}
