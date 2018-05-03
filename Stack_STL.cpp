#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*Stack 1*/
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    int top;
    while(!stk.empty())
    {
        top = stk.top();
        cout<<top<<endl;
        stk.pop();
    }
    /* stack 2*/
    stack< pair< int, int> > stkp;
    stkp.push({1,3});
    stkp.push({2,4});
    stkp.push({5,7});
    stkp.push({6,8});
    while(!stkp.empty())
    {
        cout<<stkp.top().first<<" "<<stkp.top().second<<endl;
        stkp.pop();
    }
    return 0;
}
