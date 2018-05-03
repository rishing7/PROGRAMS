#include<stdio.h>
int main()
{
    int arr[6][6],i,j,k,l;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            for(k=i;k<i+3;k++)
            {
                for(l=j;l<j+3;l++)
                {
                    if(l<=4&&k!=i+1&&k<=4)
                        printf("%d\t",arr[k][l]);
                    else if(k==i+1)
                        printf("\n\t%d\n",arr[k+1][l+1]);
                }
            }
        }
        printf("\n");
    }
}
