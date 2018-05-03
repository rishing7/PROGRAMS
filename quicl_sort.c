#include<stdio.h>
void quickSort(int* arr,int lb,int ub)
{
    int key,j,flag=1,temp,i;
    if(lb<ub)
    {
        i=lb+1;
        j=ub;
        key=arr[lb];
        while(i<j)
        {
            while(key>arr[i]&&i<ub)
                i++;
             while(key<=arr[j]&&j>lb)
                j--;
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else
            flag=0;
        }
        temp=arr[lb];
        arr[lb]=arr[j];
        arr[j]=temp;
        quickSort(arr,lb,j-1);
        quickSort(arr,j+1,ub);
    }
}
int main()
{
    int arr[10],i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quickSort(arr,0,n-1);
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
}
