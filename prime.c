#include<stdio.h>
int main()
{
    int n,flag,i,j,l,h,count=0;
    //printf("Enter the number to check the prime number:");
    //scanf("%d",&n);
    printf("lower:");
    scanf("%d",&l);
    printf("Higher:");
    scanf("%d",&h);
    //scanf("%d %d",&l,&h);
    for(j=l;j<=h;j++)
    {
        flag=1;
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {printf("%d\n",j);
        count++;}
    }
    printf("\nTotal no. prime no. in the range:%d\n",count);
    /*if(flag==0)
        printf("\nNot a prime number\n");
    else if(flag==1)
    {
        printf("\nPrime\n");
    }*/
    return 0;
}
