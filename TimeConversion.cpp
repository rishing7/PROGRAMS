#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int i;
    if(str[len-2]=='A')
    {

        if(str.compare("12:00:00AM")==0)
        {
            cout<<"00:00:00"<<endl;
        }
        else if(str[0]=='1' && str[1]=='2')
        {
            str[0] = '0';
            str[1] = '0';
            i=0;
            while(i<len-2)
            {
                cout<<str[i];
                i++;
            }
                cout<<endl;
        }
        else
        {
            i=0;
            while(i<len-2)
            {
                cout<<str[i];
                i++;
            }
                cout<<endl;
        }
    }
    else
    {
        if(str.compare("12:00:00PM")==0)
        {
            cout<<"12:00:00"<<endl;

        }
        else if(str[0]=='1' && str[1]=='2')
        {
            i=0;
            while(i<len-2)
           {
               cout<<str[i];
               i++;
           }
           cout<<endl;
        }
        else
        {
            int h1 = str[1]-'0';
            int h2 = str[0]-'0';
            int carry = 0;
            h1 = h1 + 2;
            if(h1>=10)
            {
                h1 = h1%10;
                carry = h1/10;
            }
            h2 = h2 + carry + 1;
            str[0] = h2 + '0';
            str[1] = h1 + '0';
            i=0;
           while(i<len-2)
           {
               cout<<str[i];
               i++;
           }
           cout<<endl;
        }
    }
    return 0;
}
