#include<stdio.h>
int main()
{
    int arr[10],i,n,j,minloc,temp;
    printf("Enter the number to be inserted:");
    scanf("%d",&n);
    printf("==:Insert the %d elements:==\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("Array elements are:\n");
        for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
        printf("\n");
        for(i=0;i<n;i++)
        {
            minloc=i;
                for(j=i+1;j<n;j++)
                {
                    if(arr[minloc]>arr[j])
                        minloc=j;
                }
                temp=arr[i];
                arr[i]=arr[minloc];
                arr[minloc]=temp;
        }
        printf("\nSorted Array elements are:\n");
        for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
     return 0;
}
