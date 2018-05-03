#include<stdio.h>
int main()
{
    int n,i,j,l1;
    char str[255][255];
    int arr[255][255];
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
    i=0;
    while(i<=n)
    {
        l1=0;
        j=0;
        while(str[i][j]!='\0')
        {
           /* printf("%c",str[i][j]);
            j++;
            l1++;*/
            arr[i][j]=str[i][j];
            j++;
        }
        printf("Length of %d string is:%d",i,l1);
        printf("\n");
        i++;
    }
}
