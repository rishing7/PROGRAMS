#include<stdio.h>
int main()
{
    char s1[1000][20],s2[1000][20];
    int n,q,i,j,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",&s1[i][0]);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    scanf("%s",&s2[i][0]);
    for(i=0;i<q;i++)
    {
        sum=0;
        j=0;
        while(j<n)
        {
            if(s1[j][0]==s2[i][0])
             {
                sum=sum+1;
             }
            j++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
