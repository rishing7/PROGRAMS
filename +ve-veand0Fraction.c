#include<stdio.h>
int main()
{
    int n,i=0,arr[100],sump=0,sumn=0,sum0=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    while(i!=n)
    {
        if(arr[i]>0)
            sump++;
        else if(arr[i]<0)
            sumn++;
        else
            sum0++;
            i++;
    }
    printf("sump:%d\n",sump);
    printf("sumn:%d\n",sumn);
    printf("sun0:%d\n",sum0);
    printf("%f\n",(float)sump/n);
    printf("%f\n",(float)sumn/n);
    printf("%f\n",(float)sum0/n);
    return 0;
}
