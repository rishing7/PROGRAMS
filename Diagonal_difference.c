#include<stdio.h>
int main()
{
    int m[100][100],i,j,sum1=0,sum2=0,result=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&m[i][j]);
    }
    i=0;
    j=0;
    while(i==j&&i<n&j<n)
    {
        sum1=sum1+m[i][j];
        i++;
        j++;
    }
    i=0;
    j=n-1;
    while(i<n&&j>=0)
    {
        sum2=sum2+m[i][j];
        i++;
        j--;
    }
   // printf("Sum2:%d",sum2);
    //printf("Sum1:%d",sum1);
    result=sum2-sum1;
    if(result<0)
    result=-result;
    printf("%d",result);
    return 0;
}
