#include<stdio.h>
int main()
{
    int n,i;
    char str[255][255];
    printf("Enetr the no. of string:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&str[i][0]);
    }
    for(i=0;i<3;i++)
    {
        printf("%s\n",str[i]);
    }
}
