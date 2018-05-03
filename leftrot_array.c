#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 100000
int main() {
    long arr[size],n,i,d,j,temp;
    scanf("%ld %ld",&n,&d);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<d;i++)
        {
              temp=arr[0];
            for(j=0;j<n;j++)
                {
                    arr[j]=arr[j+1];
                }
            arr[n-1]=temp;
        }
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}
