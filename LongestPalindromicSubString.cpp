#include<bits/stdc++.h>
using namespace std;
string expand(string str, int low, int high){
    while(low>=0 && high<str.length() && (str[low]==str[high]))
                low--,high++;
    return str.substr(low+1,high-low-1);//since low and high go to the mismatched character
}
string longestPalindome(string str){
    int maxLength=0,currLength;
    string maxString="";
    string currString;
    for(int i=0; i<str.length()-1; i++){
        currString=expand(str,i,i+1);
        if(currString.length()>maxLength){
            maxLength=currString.length();
            maxString=currString;
        }
    }
    return maxString;
}
int main(){
    int T;
    cout<<"Enter No. of Test Cases: ";
    cin>>T;
    string str;
    while(T--){
        cout<<"Enter String: ";
        cin>>str;
        string res = longestPalindome(str);
        cout<<"Substring is: "<<res<<"\n"<<"Length is: "<<res.length()<<endl;
    }
    return 0;
}
