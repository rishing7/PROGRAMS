#include<stdio.h>
#define size 100
void cir_array(long arr[],long n,long cir)
{
    long i,j,temp;
    for(i=1;i<=cir;i++)
    {
        temp=arr[n-1];
        for(j=n-1;j>0;j--)
            arr[j]=arr[j-1];
            arr[0]=temp;
    }
}
long main()
{
    long arr[size],n,k,q,i,m;
    scanf("%ld %ld %ld",&n,&k,&q);
    for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    cir_array(arr,n,k);
    for(i=0;i<q;i++)
    {
        scanf("%ld",&m);
        printf("%ld\n",arr[m]);
    }

    return 0;
}
