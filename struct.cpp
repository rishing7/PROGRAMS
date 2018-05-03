#include<bits/stdc++.h>
using namespace std;
struct employee{
    string name;
    int age;
    float salary;
};
int main()
{
    struct employee emp;
    emp.name = "rishi";
    cout<<emp.name<<" "<<emp.age<<" "<<emp.salary<<endl;
    return 0;
}
