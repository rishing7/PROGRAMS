#include<bits/stdc++.h>
using namespace std;
bool isTType(string str)
{
    int i=0;
    set<char> s;
    for(int j=0;j<str.length();j++)
        s.insert(str[j]);
        if(s.size()!=2)
            return false;
    while(i<str.length()-1)
    {
        if(str[i]==str[i+1])
            return false;
        i++;
    }
    return true;
}
int main()
{
    /*int T;
    cin>>T;
    while(T--){*/
    int n;
    cin>>n;
    char charArray[n];
    cin>>charArray;
    string str=charArray;
    set<char> s;
    for(int i=0;i<n;i++)
        s.insert(str[i]);
    //cout<<s.size()<<endl;

    int result = 0;
    if(s.size()==2)
    {
        if(isTType(str))
            {
                if(result<str.length())
                    {
                        result = str.length();
                        //cout<<temp1<<endl;
                    }
            }
    }
    else{
    for(set<char>::iterator itr = s.begin(); itr!=s.end(); itr++)
    {
        string temp = str;
        temp.erase( std::remove( temp.begin(), temp.end(), *itr ), temp.end() );
        //cout<<temp<<endl;
        for(set<char>::iterator itr2 = s.begin(); itr2!=s.end(); itr2++)
        {
            string temp1 = temp;
            temp1.erase( std::remove( temp1.begin(), temp1.end(), *itr2 ), temp1.end() );
            //cout<<temp1<<endl;
            if(isTType(temp1))
            {
                if(result<temp1.length())
                    {
                        result = temp1.length();
                        //cout<<temp1<<endl;
                    }
            }
        }
    }
    }
    cout<<result<<endl;//}
    return 0;
}
