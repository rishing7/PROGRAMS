#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Rishikesh xxx Rishi";
    string str1 = "xxx";
    string str2 = "Kumar";
    while(str.find(str1)!=str.npos)
    {
        int pos = str.find(str1);
        str.replace(pos,str1.size(),str2);
    }
    cout<<str<<endl;
    return 0;
}
