#include<stdio.h>
int main()
{
    int m[5][6]={   {1,2,5,6,1,3},
                    {5,2,6,7,9,7},
                    {6,5,6,8,5,7},
                    {1,2,5,6,1,3},
                    {1,2,5,6,1,3}
                };
            int i,j,k,sum[50],carry=0,temp,sumt;
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    k=0;
    for(j=6-1;j>=0;j--)
    {
        sumt=0;
        //temp=0;
        for(i=0;i<5;i++)
        {
           /* temp=(temp+m[i][j]+carry)%10;
            carry=(temp+m[i][j]+carry)/10;
            */
            sumt=sumt+m[i][j];

        }
            sum[k++]=(sumt%10+carry)%10;
            carry=sumt/10;
        /*
        sum[k++]=temp;
        printf("temp:%d\n",temp);*/
    }
    if(carry>0)
        sum[k++]=carry;
    for(i=k-1;i>=0;i--)
    {
        printf("%d",sum[i]);
    }
    return 0;
}
