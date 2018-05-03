#include<stdio.h>
int main()
{
    int arr[10][10],n,i,j,l,m,sum[15],temp,k,carry=0;
    char str[255][255];
    printf("Enter the number of element to be added:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&str[i][0]);
    }
    for(i=0;i<n;i++)
    printf("%s\t",str[i]);
    i=0;
    l=0;
    while(i<n)
    {
        m=0;
        j=0;
        while(str[i][j]!='\0')
        {
            arr[l][m]=str[i][j]-'0';
            j++;
            m++;
        }
        i++;
        l++;
    }
    printf("\nl:%d",l);
    printf("\nm:%d\n",m);
    i=0;
    while(i<l)
    {
        j=0;
        while(j<m)
        {
            printf("%d",arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    k=0;
    for(i=m-1;i>=0;i--)
    {
        temp=0;
        for(j=0;j<l;j++)
        {
            //temp=(temp+arr[j][i]+carry)%10;
            //carry=(temp+arr[j][i]+carry)/10;
            temp=temp+arr[j][i];
        }

        sum[k++]=(temp+carry)%10;
        carry=(temp+carry)/10;
    }
    if(carry>0)
        sum[k++]=carry;
    for(i=k-1;i>=0;i--)
        printf("%d",sum[i]);
    return 0;
}
