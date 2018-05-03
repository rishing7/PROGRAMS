#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string str1, string str2)
{
    if(str1.length()!=str2.length())
        return false;
        unordered_map<char, char> map;
    for(int i=0; i<str1.length(); i++){
            if(map.find(str1[i])!=map.end()){
                if(map[str1[i]]!=str2[i])
                    return false;
            }
        map[str1[i]] = str2[i];
    }
    return true;
}
int main()
{
    string str1 = "ACAB";
    string str2 = "XCXY";
    if(isIsomorphic(str1, str2))
        cout<<"Isomorphic String"<<endl;
    else
        cout<<"Not A Isomorphic String"<<endl;

    return 0;
}
