#include<stdio.h>
int main()
{
    char str[20];
    int i;
    i=0;
    scanf("%s",str);
    while(str[i]!='\0')
    {
        str[i]=str[i]-32;
        i++;
    }
    printf("%s",str);
    return 0;
}
