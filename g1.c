#include<stdio.h>
//char dic[]={ i, like, sam, sung, samsung, mobile, ice,cream, icecream, man, go, mango};
int main()
{
    int testcase,i,N,j;
    char dict[12][15],string[1000];
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            scanf("%s",&dict[i][0]);
        }
        gets(string);
    }
    return 0;
}
