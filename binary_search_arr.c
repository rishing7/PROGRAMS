#include<stdio.h>
#include<stdlib.h>
int* sort(int arr[],int n)
{
    int i,min,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return arr;
}
int main()
{
    int arr[20],i,n,*ptr,low,high,mid,key,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=sort(arr,n);
     for(i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\nEnter the the key element to be searched:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>=ptr[mid])
        {
            low=mid+1;
        }
        if(key<=ptr[mid])
        {
            high=mid-1;
        }
        if(key==ptr[mid])
        {
            flag++;
            printf("\nElement found at :%d",mid+1);
        }
    }
    if(flag==0)
        printf("\nElement is not in the list");
    return 0;
}
