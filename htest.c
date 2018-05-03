#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int sum=1,i=0;
    do
        {
        if(s[i]>='A'&&s[i]<='Z')
            sum++;
        i++;
    }while(s[i]!='\0');
    printf("%d",sum);
    return 0;
}
