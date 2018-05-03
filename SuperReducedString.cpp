#include<bits/stdc++.h>
using namespace std;
string superReducedString(string str,int i)
{
    if(str[i]=='\0')
    {
        return str;
    }
    string tempStr="";
    if(str[i]==str[i+1])
    {
        str.erase(str.begin()+i, str.begin()+i+1+1);
        i=0;
    }
    else
        i++;
    return superReducedString(str, i);
}
int main()
{
    string str;
    cin>>str;
    string result = superReducedString(str, 0);
    if(result.length()==0)
        cout<<"Empty String"<<endl;
    else
        cout<<result<<endl;
    return 0;
}
