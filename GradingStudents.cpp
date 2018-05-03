#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int grade;
        cin>>grade;
        if(grade<38)
        {
            cout<<grade<<endl;
        }
        else
        {
            int multiple5 = grade;
            while(multiple5%5 != 0)
            {
                multiple5++;
            }
            if(multiple5-grade < 3)
            {
                grade = multiple5;
                cout<<grade<<endl;
            }
            else
                cout<<grade<<endl;
        }
    }
    return 0;
}
