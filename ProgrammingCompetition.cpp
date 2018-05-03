#include<bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int d;
    int j;
    int difference;
    int rank;
};
int main()
{
    int n;
    cin>>n;
    struct Student st[n];
    for(int i=0;i<n;i++)
    {
        cin>>st[i].name>>st[i].d>>st[i].j;
        st[i].difference = 0;
        st[i].rank = 0;
    }
    for(int i=0;i<n;i++)
    {
        st[i].difference = st[i].j - st[i].d;
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<st[i].name<<" "<<st[i].d<<" "<<st[i].j<<" "<<st[i].difference<<" "<<st[i].rank<<endl;
    }*/
    int max = st[0].difference, temp=0;
    for(int i=1;i<n;i++)
    {
        if(st[i].difference>max)
        {
            max = st[i].difference;
            temp = i;
    }
    cout<<st[temp].name<<" "<<st[temp].difference<<endl;
    return 0;
}
