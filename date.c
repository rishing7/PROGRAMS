#include<dos.h>
#include<stdio.h>
int main()
{
    /*struct Date d;
    getdate(d);
    printf("%/%d/%d\n",d.da_date,d.da_mon,d.da_year);*/
    printf("%s",__DATE__);
    return 0;
}
