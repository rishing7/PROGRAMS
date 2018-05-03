#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	char str[10000];
	while(T--)
	{
	    cin>>str;
	    int count0=0;
	    int count1=0;
	    int len = strlen(str);
	    for(int i=0;i<len;i++)
	    {
	        if(i%2==0 && str[i]!='0')
	        count0++;
	        if(i%2==1 && str[i]!='1')
	        count0++;
	    }
	    for(int i=0;i<len;i++)
	    {
	        if(i%2==0 && str[i]!='1')
	        count1++;
	        if(i%2==1 && str[i]!='0')
	        count1++;
	    }
	    int result  = count0>count1?count1:count0;
	    cout<<result<<endl;

	}
	return 0;
}
