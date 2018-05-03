#include<bits/stdc++.h>
using namespace std;
template <typename T>
void swapItems(T a, T b){
    T t;
    t = a;
    a = b;
    b = t;
    cout<<a<<" "<<b;
}
int main(){
    int a,b;
    cin>>a>>b;
    swapItems(a,b);
    return 0;
}
