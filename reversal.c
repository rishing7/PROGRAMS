#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,temp;
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(i = 0;i < n;i++){
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=arr[n-1-i];
        arr[n-1-i]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}

