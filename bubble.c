#include<stdio.h>
int main()
{
    int arr[10],j,i,n,temp;
    printf("Enter the number to be inserted:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("\n==Array Elements are==\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n==Sorted elements are==\n");
        for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
