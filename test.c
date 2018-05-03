#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int point=1;
    int a0;
    int a1;
    int a2;
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d",&a0,&a1,&a2);
    scanf("%d %d %d",&b0,&b1,&b2);
    if((a0>b0||a1>b1||a2>b2)>0?printf("%d",point):printf("\t"))
    if(a0<b0||a1<b1||a2<b2)
    {
      printf("%2d",point);
    }
    if(a0==b0||a1==b1||a2==b2)
    return 0;
}
