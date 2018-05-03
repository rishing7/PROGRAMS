#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    scanf("%s",s1);
    scanf("%s",s2);
    int i=0,j=0,loc;
    while(s1[i]!='\0')
    {
        while(s1[i]!=s2[0]&&s1[i]!='\0')
            i++;
            if(s1[i]=='\0')
            {
                printf("Substring not found");
                break;
            }

        loc=i;
        while(s1[i]==s2[j]&&s1[i]!='\0'&&s2[j]!='\0')
        {
            i++;
            j++;
        }
        if(s2[j]=='\0')
        {
            printf("Substring found");
            break;
        }

        if(s1[i]=='\0')
           {
                printf("Substring not found");
                break;
           }
        i=loc+i;
        j=0;
    }
    return 0;
}
