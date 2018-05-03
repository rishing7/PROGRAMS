#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //pointer
    int x = 10;
    int* ptr = &x;
    *ptr=20;
    cout<<*ptr<<endl;

    x = 100;
    cout<<*ptr<<endl;

    int z=25;
    ptr = &z;

    cout<<*ptr<<endl;//a pointer can pointer other object like x to z changes without an error

    //References
    int y=10;
    int& ref = y;
    ref = 30;
    cout<<ref<<endl;
    y = 50;
    cout<<ref<<endl;

    int k = 35;
    ref = k;
    cout<<ref<<endl;
    return 0;
}
