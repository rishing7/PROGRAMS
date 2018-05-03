#include<bits/stdc++.h>
using namespace std;
void printPatternMatchingIndex(string text, string pattern)
{
    int l=0;
    for(int i=0; i<text.length(); i++)
    {
        int j=i, k=0,flag=0;
        while(k<pattern.length() && (text[j] == pattern[k]))
        {
            flag++;
            k++;
            j++;
        }
        if(flag == pattern.length())
        {
            cout<<"Pattern Found At "<<i<<" position"<<endl;
            l=1;
        }
    }
    if(l==0)
        cout<<"Pattern Not found"<<endl;
}
int main()
{
    string text, pattern;
    cin>>text>>pattern;
    printPatternMatchingIndex(text, pattern);
    return 0;
}
