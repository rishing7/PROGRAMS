#include<bits/stdc++.h>
using namespace std;
bool exactMatch(char *text, char *pat)
{
    if (*text == '\0' && *pat != '\0')
        return false;

    // Else If last character of pattern reaches
    if (*pat == '\0')
        return true;

    if (*text == *pat)
        return exactMatch(text + 1, pat + 1);
    else
        return exactMatch(text+1,pat);

}
int main(){
    char *txt="i am rishikesh";
    char *pat="ss";
    if(exactMatch(txt,pat))
        cout<<"Found"<<endl;
    else
        cout<<"Not Found";
    return 0;
}
