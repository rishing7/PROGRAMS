#include<stdio.h>
int binary_search(int A[],int left,int right,int key)
{
    int mid=(left+right)/2;
    if(A[mid]==key)
        return mid;
    else if(A[mid]>key)
        return binary_search(A,left,mid-1,key);
    else return binary_search(A,mid+1,right,key);
    return -1;
}
int main()
{
    int A[]={1,2,3,6,9,10},key;
    scanf("%d",&key);
    int loc=binary_search(A,0,5,key);
    if(loc==-1)
        printf("Element not present in the list");
    else
        printf("%d",loc);
    return 0;
}
